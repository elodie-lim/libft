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
#include <stdlib.h>

static size_t	count_words(const char *str, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static void	free_tab(char **tab)
{
	int	i;

	i = 0;
	if (!tab)
		return ;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static void	fill_tab(char *tab, char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		tab[i] = s[i];
		i++;
	}
	tab[i] = '\0';
}

static int	fill_reslt(char **rslt, char const *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		count;

	i = 0;
	j = 0;
	while (s[i])
	{
		count = 0;
		while (s[i + count] && s[i + count] != c)
			count++;
		if (count > 0)
		{
			rslt[j] = malloc(sizeof(char) * (count + 1));
			if (!rslt[j])
				return (1);
			fill_tab(rslt[j++], &s[i], c);
			i += count;
		}
		else
			i++;
	}
	rslt[j] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t		words;
	char		**rslt;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	rslt = malloc(sizeof(char *) * (words + 1));
	if (!rslt)
		return (NULL);
	if (fill_reslt(rslt, s, c) == 1)
	{
		free_tab(rslt);
		return (NULL);
	}
	return (rslt);
}

/*#include <stdio.h>

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