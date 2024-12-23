/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:56:44 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/16 18:25:24 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function fills the first n bytes of the memory 
** area pointed to by s with zeros. 
** It takes as parameters a pointer s, which points 
** to the beginning of the memory address to fill, 
** and a size_t n, which specifies the number of bytes 
** to write to the memory area.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
