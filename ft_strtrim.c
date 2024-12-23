/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:46:35 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/13 17:46:35 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strtrim - Removes specified characters from the beginning
** and end of a string.
**
** The ft_strtrim function takes an input string (s1)
** and a string of characters (set) containing
** the characters to remove. It returns a newly dynamically allocated
** string, which is a version of s1 without the characters present
** in set at the beginning and end.
**
** @param s1: The string to trim. Must not be NULL.
** @param set: The characters to remove. Must not be NULL.
**
** @return: A pointer to the newly dynamically allocated string
** without the undesirable characters.
** Returns NULL if an allocation fails or if any of the inputs is NULL.
*/

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, &s1[start], len + 1);
	return (result);
}
