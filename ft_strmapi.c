/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 23:14:52 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/13 23:14:52 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The ft_strmapi() function applies a given function to each character 
**of a string to create a new modified string.
**
**@param const char *s: The input string to process.
**@param char (*f)(unsigned int, char): A pointer to a function that 
**takes an index (unsigned int) and a character (char) as parameters, 
**and returns a modified character.
**
**@return char*: The function returns a pointer to 
**the new string containing the modified characters. 
**If an error occurs (NULL input string, memory allocation failure), 
**it returns NULL.
*/

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
