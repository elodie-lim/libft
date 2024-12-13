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

#include "libft.h"

static int	count(const char *s, char c)
{
	int	i;
	int	in_word;
	int	cnt;

	i = 0;
	in_word = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] == c && in_word)
		{
			in_word = 0;
		}
		else if (s[i] != c && !in_word)
		{
			in_word = 1;
			cnt++;
		}
		i++;
	}
	return (cnt);
}

static char	**alloc(int cnt)
{
	char	**res;
	int		i;

	res = ft_calloc(cnt + 1, sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (i < cnt)
	{
		res[i] = ft_calloc(1024, sizeof(char));
		if (!res[i])
		{
			while (i--)
				free(res[i]);
			return (NULL);
		}
		i++;
	}
	res[i] = NULL;
	return (res);
}

static void	fill(const char *s, char c, char **res)
{
	int	i;
	int	j;
	int	in_word;
	int	idx;

	i = 0;
	j = 0;
	idx = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] == c && in_word)
		{
			in_word = 0;
			res[idx++][j] = '\0';
			j = 0;
		}
		else if (s[i] != c)
		{
			in_word = 1;
			res[idx][j++] = s[i];
			if (s[i + 1] == '\0')
				res[idx][j] = '\0';
		}
		i++;
	}
}

char	**ft_split(const char *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	if (ft_strlen(s) == 0)
	{
		res = malloc(sizeof(char *));
		res[0] = NULL;
		return (res);
	}
	res = alloc(count(s, c));
	if (!res)
		return (NULL);
	fill(s, c, res);
	return (res);
}

/*
#include <stdio.h>
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
}
*/