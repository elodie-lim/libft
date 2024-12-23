/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 03:53:21 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/30 03:53:21 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The function searches for the first occurrence of a given character
**in a string and returns a pointer to that occurrence in the string.
**If the character is not found, the function returns NULL.
**The function also considers the null terminator (\0) by checking if
**it matches the searched character.
**
**@param const char *s: the source string
**@param int c: the character to search for in s
**@return a pointer to the first occurrence of the
**specified character in the string s
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	unsigned char	char_c;

	str = (char *) s;
	char_c = (unsigned char) c;
	while (*str)
	{
		if (*str == char_c)
			return (str);
		str++;
	}
	if (*str == char_c)
		return (str);
	return ((void *) 0);
}
