/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 01:21:25 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/10 01:21:25 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_substr function extracts a substring from a given string.
** It allocates a new string (with malloc) that starts at the 'start' index
** of the string 's' and has a maximum length defined by 'len'.
**
** @param const char *s: The source string from which to extract
** the new substring.
** @param unsigned int start: The starting index of the substring
** in the source string 's'.
** @param size_t len: The maximum length of the substring to extract.
**
** @return: A new string corresponding to the extracted substring.
** Returns NULL if the allocation fails or if the source string is NULL.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	actual_len;
	char	*substring;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	actual_len = s_len - start;
	if (len < actual_len)
		actual_len = len;
	substring = (char *)malloc((actual_len + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	ft_memcpy(substring, s + start, actual_len);
	substring[actual_len] = '\0';
	return (substring);
}
