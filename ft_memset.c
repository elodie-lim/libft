/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:48:55 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/16 17:51:48 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The memset() function fills the first n bytes of the memory area 
**pointed to by s with the constant byte c.
**void *s designates the memory block to initialize.
**int c is the value to which each byte of the block 
**will be initialized.
**size_t n is the number of bytes to initialize in the memory block.
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*new_s;

	new_s = (unsigned char *) s;
	while (n > 0)
	{
		*new_s = (unsigned char) c;
		new_s++;
		n--;
	}
	return (s);
}
