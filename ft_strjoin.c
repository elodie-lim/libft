/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:17:25 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/13 17:17:25 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strjoin - Concatene deux chaines de caracteres en une seule.
** 
** Cette fonction prend deux chaines d'entree, s1 et s2, 
**et alloue dynamiquement une nouvelle chaine qui contient le contenu de s1 
**suivi du contenu de s2. Elle utilise ft_strlen pour
** determiner la longueur des chaines et ft_strlcpy/ft_strlcat 
**pour effectuer les copies de maniere securisee.
** 
** @param s1 La premiere chaine a concatener. Ne doit pas etre NULL.
** @param s2 La deuxieme chaine a concatener. Ne doit pas etre NULL.
** 
** @return Un pointeur vers la nouvelle chaine allouee dynamiquement 
** contenant la concatenation de s1 et s2.
** Retourne NULL si une allocation echoue ou si l'une des chaines est NULL.
*/

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t		len_s1;
	size_t		len_s2;
	char		*result;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	result = ft_calloc(len_s1 + len_s2 + 1, sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, len_s1 + 1);
	ft_strlcat(result, s2, len_s1 + len_s2 + 1);
	return (result);
}

/*
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    const char *s1 = "Kelly ";
    const char *s2 = "Oubre";
    char *result;

    result = ft_strjoin(s1, s2);
    if (result)
    {
        printf("Result: %s\n", result);
        free(result);
    }
    else
    {
        printf("Memory allocation failed or NULL input.\n");
    }

    return 0;
}
*/