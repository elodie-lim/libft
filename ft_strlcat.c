/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 02:55:19 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/30 02:55:19 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The function concatenates a source string src to a destination string dst
**safely, limiting the total size of dst to a given maximum, which is size.
**
**@param char *dst: the destination string
**@param const char *src: the source string
**@param size_t size: the maximum final total size of dst
**@return: the theoretical final length of the destination string
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	src_len = ft_strlen(src);
	while (dst[i] != '\0')
	{
		i++;
	}
	dst_len = i;
	if (size == 0 || size <= dst_len)
		return (size + src_len);
	while (src[j] != '\0' && j < size - dst_len - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (src_len + dst_len);
}
