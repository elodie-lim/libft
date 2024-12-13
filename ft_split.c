/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:09:40 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/13 18:09:40 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_split - Divise une chaine de caracteres en plusieurs sous-chaines
** selon un caractere delimiteur specifie.
**
** La fonction prend une chaine d'entree (s) et un caractere delimitateur (c). 
** Elle retourne un tableau de sous-chaines (tableau de pointeurs vers des 
** chaines de caracteres), chaque sous-chaine correspondant a un mot 
** separe par le caractere delimiteur.
**
** @param s : La chaine d'entree a diviser. Ne doit pas etre NULL.
** @param c : Le caractere delimitant les sous-chaines. 
**
** @return Un tableau de chaines de caracteres (char **), chaque element 
** du tableau correspondant a un mot extrait de la chaine d'entree. 
** Le tableau se termine par un pointeur NULL.
** Si une erreur d'allocation memoire survient ou si l'entree est NULL, 
** la fonction retourne NULL.
*/

#include "libft.h"

static int	ft_count(const char *s, const char c)
{
	int	i;
	int	new_word;
	int	count;

	i = 0;
	new_word = 1;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && !new_word)
		{
			new_word = 1;
		}
		else if (s[i] != c && new_word)
		{
			new_word = 0;
			count++;
		}
		i++;
	}
	return (count);
}

static char	**ft_alloc(int count)
{
	char	**result;
	int		i;
	int		j;

	result = ft_calloc(1 + count, sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (i < count)
	{
		result[i] = ft_calloc(1024, sizeof(char));
		if (!result[i])
		{
			j = 0;
			while (j < i)
			{
				free(result[j]);
				j++;
			}
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}

static void	ft_split_fill(const char *s, const char c, char **result)
{
	int	i;
	int	j;
	int	new_word;
	int	count;

	i = -1;
	j = 0;
	count = 0;
	new_word = 1;
	while (s[++i])
	{
		if (s[i] == c && !new_word)
		{
			new_word = 1;
			result[count++][j] = '\0';
			j = 0;
		}
		else if (s[i] != c)
		{
			new_word = 0;
			result[count][j++] = s[i];
			if (s[i + 1] == '\0')
				result[count][j] = '\0';
		}
	}
}

char	**ft_split(const char *s, const char c)
{
	char	**result;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) == 0)
	{
		result = malloc(sizeof(char *));
		result[0] = NULL;
		return (result);
	}
	result = ft_alloc(ft_count(s, c));
	if (!result)
		return (NULL);
	ft_split_fill(s, c, result);
	return (result);
}

/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    char **result;
    int i;

    result = ft_split("san diego", ' ');

    if (result)
    {
        i = 0;
        while (result[i] != NULL)
        {
            printf("word %d: '%s'\n", i + 1, result[i]);
            i++;
        }

        //free memory
        i = 0;
        while (result[i])
        {
            free(result[i]);
            i++;
        }
        free(result);
    }
    else
    {
        printf("error: memory allocation failed or invalid input.\n");
    }

    return 0;
}*/