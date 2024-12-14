/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 00:40:46 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/25 00:40:46 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**La fct a pour but de copier les n-1 caracteres 
**de la chaine src dans dst et garantit que la chaine dst
**se termine bien par \0. la fct check aussi si src completement 
**copiee ou tronquee.
**@param char *dst la chaine d arrivee
**@param char *src la chaine dont on copie les n caracteres
**@param size_t n les n caracteres a copier
**@return la longueur de la chaine src (sans compter le \0)
**et permet de check si la copie a ete tronquee,
**soit dst trop petite 
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size)
	{
		while (count < size - 1 && src[count])
		{
			dst[count] = src[count];
			count++;
		}
		dst[count] = '\0';
	}
	return (ft_strlen(src));
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "test";
    char dst1[20];
    char dst2[20];

    size_t len1 = ft_strlcpy(dst1, src, sizeof(dst1));
    printf("ft_strlcpy result: %s\n", dst1);
    printf("ft_strlcpy returned: %zu\n\n", len1);

    size_t len2 = strlcpy(dst2, src, sizeof(dst2));
    printf("Standard strlcpy result: %s\n", dst2);
    printf("strlcpy returned: %zu\n", len2);

    return 0;
}*/