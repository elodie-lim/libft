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
** ft_calloc - Allocates and initializes a memory block
**
** This function allocates a memory block large enough to hold
** `element_count` objects of size `element_size`. The memory is
** initialized to zero. If the allocation fails or if the total size
** exceeds the maximum value possible for a `size_t`, it returns `NULL`.
**
** @param element_count The number of elements to allocate.
** @param element_size The size of each element.
** @return A pointer to the allocated memory initialized to zero,
** or `NULL` if the allocation fails.
*/

#include "libft.h"

void	*ft_calloc(size_t element_count, size_t element_size)
{
	void	*mem;
	size_t	total_size;

	total_size = element_count * element_size;
	if (total_size > SIZE_MAX)
		return (NULL);
	mem = malloc(total_size);
	if (!mem)
		return (NULL);
	else
		ft_bzero(mem, total_size);
	return (mem);
}
