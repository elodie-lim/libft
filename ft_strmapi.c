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
**La fonction ft_strmapi() applique une fonction donnee en parametre
**a chaque caractere d'une chaine de caracteres pour en creer une
**nouvelle chaine modifiee.
**
**@param const char *s : La chaine d'entree a traiter.
**@param char (*f)(unsigned int, char) : Un pointeur vers une 
**fonction prenant en parametre un index (unsigned int) et 
**un caractere (char), et retournant un caractere modifie.
**
**@return char* : La fonction retourne un pointeur vers 
**la nouvelle chaine contenant les caracteres modifies. 
**Si une erreur survient (chaine d'entree NULL, allocation 
**memoire echouee), elle retourne NULL.
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

/*
#include <stdio.h>
#include <stdlib.h>
char transform(unsigned int i, char c)
{
    if (i % 2 == 0)
        return c - 32;
    return c;
}

int main(void)
{
    const char *original = "kelly_oubre";
    char *result;

    result = ft_strmapi(original, transform);

    if (result)
    {
        printf("Original : %s\n", original);
        printf("Modified : %s\n", result);
        free(result); //libere la memoire allouee
    }
    else
    {
        printf("An error has occured.\n");
    }

    return 0;
}*/