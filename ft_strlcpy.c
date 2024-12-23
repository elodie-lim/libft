/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 00:40:46 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/25 00:40:46 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The function aims to copy the first n-1 characters 
**from the source string src into the destination string dst 
**and ensures that dst is properly null-terminated. The function also checks 
**if the src string is completely copied or truncated.
**
**@param char *dst: the destination string
**@param char *src: the source string from which the n characters are copied
**@param size_t n: the number of characters to copy
**@return: the length of the src string (excluding the null terminator)
**and allows checking if the copy was truncated,
**either because dst was too small.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size)
	{
		while (count < size - 1 && src[count])
		{
			dst[count] = src[count];
			count++;
		}
		dst[count] = '\0';
	}
	return (ft_strlen(src));
}
