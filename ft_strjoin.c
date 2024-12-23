/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:17:25 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/13 17:17:25 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strjoin - Concatenates two strings into one.
**
** This function takes two input strings, s1 and s2,
** and dynamically allocates a new string that contains the contents of s1
** followed by the contents of s2. It uses ft_strlen to
** determine the lengths of the strings and ft_strlcpy/ft_strlcat
** to safely perform the copies.
** 
** @param s1: The first string to concatenate. It must not be NULL.
** @param s2: The second string to concatenate. It must not be NULL.
** 
** @return: A pointer to the newly dynamically allocated string
** containing the concatenation of s1 and s2.
** Returns NULL if an allocation fails or if one of the strings is NULL.
*/

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t		len_s1;
	size_t		len_s2;
	char		*result;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	result = ft_calloc(len_s1 + len_s2 + 1, sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, len_s1 + 1);
	ft_strlcat(result, s2, len_s1 + len_s2 + 1);
	return (result);
}
