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

static char		**words(const char *str, char **result, char c);
static size_t	count_words(const char *str, char c);
static char		*copy_word(const char *str, int start, int end);

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

static void	free_result(char **result, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static char	**words(const char *str, char **result, char c)
{
	size_t	count;
	size_t	i;
	size_t	start;

	i = 0;
	count = 0;
	while (str[i] != '\0' && (count < count_words(str, c)))
	{
		if (str[i] != c)
		{
			start = i;
			while (!(str[i + 1] == c || str[i + 1] == '\0'))
				i++;
			result[count] = copy_word(str, start, i + 1);
			if (!result[count])
			{
				free_result(result, count);
				return (NULL);
			}
			count++;
		}
		i++;
	}
	return (result);
}

static char	*copy_word(const char *str, int start, int end)
{
	char	*word;
	size_t	i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		size;

	if (!s)
		return (NULL);
	size = count_words(s, c);
	result = malloc(sizeof(char *) * (size + 1));
	if (!result)
		return (NULL);
	result[size] = NULL;
	result = words(s, result, c);
	return (result);
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