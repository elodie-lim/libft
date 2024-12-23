/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 11:30:27 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/30 11:30:27 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The function searches for the last occurrence of a given character
**c in a string s. If it finds the character, it returns 
**a pointer to that position
**in the string. Otherwise, it returns NULL.
**
**@param const char *s: the base string
**@param int c: the character whose last occurrence is being searched for
**@return: a pointer to the address of the last occurrence of the character, 
**or NULL if c is not found
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_length;

	little_length = ft_strlen(little);
	if (!little_length)
		return ((char *) big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			j++;
			if (!little[j])
				return ((char *)&big[i]);
		}
		i++;
	}
	return ((void *) 0);
}
