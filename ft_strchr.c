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
**La fct cherche la premiere occurence d un caractere
**donne dans une chaine de caractere et va retourner
**un pointeur vers cette occurence dans la chaine.
**Si le caractere n est pas trouve la fct return NULL
**et la fct prend en compte le \0 en verifiant si
**ce dernier ==au caractere recherche
**@param const char *s la chaine source
**@param int c le caractere a rechercher ds s
**@return un pointeur vers la premiere occurence du 
**caractere specifie dans la chaine s
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

/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char str[] = "Yao Ming is a Chinese basketball player";
    //char c = 'M';
	char c = 'Z';
    
    char *result = ft_strchr(str, c);

    if (result)
        printf("The character '%c' was found in the string: 
		\"%s\"\n", c, result);
    else
        printf("The character '%c' was not found in the string.\n", c);

    return 0;
}*/