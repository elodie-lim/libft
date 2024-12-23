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
** ft_split - Splits a string into multiple substrings
** based on a specified delimiter character.
**
** The function takes an input string (s) and a delimiter character (c). 
** It returns an array of substrings (an array of pointers to strings),
** where each substring corresponds to a word 
**separated by the delimiter character.
**
** @param s: The input string to split. It must not be NULL.
** @param c: The character that separates the substrings. 
**
** @return An array of strings (char **), where each element 
** of the array corresponds to a word extracted from the input string. 
** The array is terminated by a NULL pointer.
** If a memory allocation error occurs or if the input is NULL, 
** the function returns NULL.
*/

#include "libft.h"

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
