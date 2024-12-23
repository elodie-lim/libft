/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:27:58 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/11 16:27:58 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_memchr - Searches for the first occurrence of a character
** in a memory area.
** The function examines the bytes of the memory area starting from the address
** pointed to by s until it finds a match with c or has examined n bytes.
**
** @param s: Pointer to the memory area where the search will be performed.
** @param c: Character to search for (interpreted as an unsigned char).
** @param n: Maximum number of bytes to examine.
**
** @return:
** - A pointer to the first occurrence of the character found.
** - NULL if the character is not found in the first n bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	to_find;
	size_t			i;

	str = (unsigned char *)s;
	to_find = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == to_find)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
