/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 20:23:00 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/16 20:23:25 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**La fct a pour but de copier un bloc de memoire specifie
**par le @param source dont la taille est specifiee par @param size
**dans un nouvel emplacement designe par le @param dest
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	if (!dst || !src)
		return (NULL);

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

int main(void)
{
    char src[] = "test";
    char dest[10];

    ft_memcpy(dest, src, 5);

    printf("source: %s\n", src);
    printf("destination: %s\n", dest);

    return 0;
}*/