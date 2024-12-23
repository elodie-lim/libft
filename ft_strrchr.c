/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:04:44 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/30 10:04:44 by elodlim          ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	char			*last_character;
	unsigned char	char_c;

	str = (char *) s;
	last_character = (void *) 0;
	char_c = (unsigned char) c;
	while (*str)
	{
		if (*str == char_c)
			last_character = str;
		str++;
	}
	if (*str == char_c)
		last_character = str;
	return (last_character);
}
