/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:33:32 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/30 10:33:32 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The function compares each character of the two strings
**until a different character is found or until n 
**characters have been compared.
**
**@param const char *s1: the first string of characters
**@param const char *s2: the second string compared with the first
**@param size_t n: the number of characters to compare in the strings
**@return: an integer corresponding to the difference between the 
**two characters, and indicates which of the two characters 
**was 'greater', if a difference between the strings 
**was found before all characters were compared.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		char_diff;

	char_diff = 0;
	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	if (!char_diff && i < n)
		char_diff = (unsigned char) s1[i] - (unsigned char) s2[i];
	return (char_diff);
}
