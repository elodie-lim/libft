/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 00:41:26 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/25 00:41:26 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The function memmove() copies n bytes from the memory area src
**to the memory area dest, even if the areas overlap.
**If there is overlap: it copies starting from the n-th character,
**otherwise, it copies from the beginning to the n-th character.
**
**@param void *dest: the destination memory area
**@param const void *src: the source memory area
**@param size_t n: the number of bytes to copy
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if ((dst == src) || n == 0)
		return (dst);
	if (dst > src)
	{
		i = n - 1;
		while (i > 0)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i--;
		}
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		i--;
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	return (dst);
}
