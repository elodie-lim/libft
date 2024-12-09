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

/*
** ft_calloc - Alloue et initialise une zone memoire
** 
** Cette fonction alloue une zone memoire suffisante pour contenir
** `element_count` objets de taille `element_size`. La memoire est 
** initialisee a zero. Si une allocation echoue ou si la taille totale 
** depasse la valeur maximale possible pour un `size_t`, elle retourne `NULL`.
** 
** @param element_count Le nombre d'elements a allouer.
** @param element_size La taille de chaque element.
** @return Un pointeur vers la memoire allouee initialisee a zero, 
** ou `NULL` si l'allocation echoue.
**/

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

#include <stdio.h>
#include <limits.h>

int main(){
    
    printf("Unsigned long max value: %lu\n", ULONG_MAX);

    
    size_t element_count = 5;
    size_t element_size = sizeof(int);
    int *array = (int *)ft_calloc(element_count, element_size);

    if (array == NULL)
    {
        printf("Allocation failed\n");
        return (1);
    }

    //pout verifier que tous les elements sont initialises a zero
    printf("Array initialized with ft_calloc values:\n");
    for (size_t i = 0; i < element_count; i++)
    {
        printf("array[%lu] = %d\n", i, array[i]);
    }

    //liberer la memoire allouee
    free(array);

    return (0);
}
