/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:57:58 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/30 10:57:58 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The function compares the first n bytes of two memory blocks
**byte by byte and returns the difference
**between the corresponding bytes of the memory blocks s1 and s2,
**allowing to determine if one of the blocks is 'smaller' or 'larger'
**than the other at the position of the first difference.
**The function has undefined behavior when either s1 or s2 is NULL.
**
**@param const void *s1: the first memory block
**@param const void *s2: the second memory block
**@param size_t n: the number of bytes to compare
**@return the difference between the corresponding bytes
**of s1 and s2
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*new_s1;
	unsigned char	*new_s2;

	new_s1 = (unsigned char *) s1;
	new_s2 = (unsigned char *) s2;
	while (n > 0)
	{
		if (*new_s1 != *new_s2)
			return (*new_s1 - *new_s2);
		new_s1++;
		new_s2++;
		n--;
	}
	return (0);
}
