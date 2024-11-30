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
**La fct recherche la derniere occurence d un caractere 
**donne c dans une chaine de caracteres s. Si elle trouve
**ce caractere, elle retourne un pointeur vers cette position
**dans la chaine. sinon elle retourne NULL.
**@param const char *s la chaine de base
**@param int c le caractere dont on cherche last occurence
**@return un pointeur vers l adresse de la derniere
**occurence du caractere ou null si !c
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

/*
#include <stdio.h>

int main(void)
{
    const char *str = "Hello, world!";
    char c1 = 'o';
    char c3 = 'z';
    char c4 = '\0';

	//cherche la derniere occurence du caractere o
    char *result1 = ft_strrchr(str, c1);
    if (result1)
        printf("Last occurrence of '%c' in \"%s\": \"%s\"\n", c1, str, result1);
    else
        printf("Character '%c' not found in \"%s\"\n", c1, str);

	//cherche un caractere qui n est pas dans la chaine s
    char *result3 = ft_strrchr(str, c3);
    if (result3)
        printf("Last occurrence of '%c' in \"%s\": \"%s\"\n", c3, str, result3);
    else
        printf("Character '%c' not found in \"%s\"\n", c3, str);

	//cherche le \0
    char *result4 = ft_strrchr(str, c4);
    if (result4)
        printf("Last occurrence of '\\0' in \"%s\": \"%s\"\n", str, result4);
    else
        printf("Character '\\0' not found in \"%s\"\n", str);

    return 0;
}*/
