/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 02:29:07 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/04 02:29:07 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

void	*ft_calloc(size_t element_count, size_t element_size)
{
	size_t			total_bytes;
	unsigned char	*memory_block;

	total_bytes = 0;
	if (element_count > 18446744073709551615UL / element_size)
		return ((void *) 0);
	memory_block = (void *) malloc(element_count * element_size);
	if (!memory_block)
		return ((void *) 0);
	while (total_bytes < element_count * element_size)
	{
		memory_block[total_bytes] = (unsigned char) 0;
		total_bytes++;
	}
	return ((void *) memory_block);
}

/*
#include <stdio.h>
#include <limits.h>

int main(void)
{
    // Afficher la valeur maximale d'un unsigned long
    printf("La valeur maximale d'un unsigned long est : %lu\n", ULONG_MAX);

    return 0;
}*/
