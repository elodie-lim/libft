/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:57:58 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/30 10:57:58 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**La fct compare les n premiers octets de deux blocs 
**de memoire octet par octet et retourne la difference 
**entre les octets correspondants des blocs de mem 
**s1 et s2, permettant de savoir si l un des blocs est 
**'plus petit' ou 'plus gd' que l autre a la position de 
**la premiere difference.
**La fct est en undefined behavior qd !s1 ou !s2
**@param const void *s1 premier bloc de memoire
**@param const void *s2
**@param size_t n le nb d octets a comparer
**@return la difference entre les octets 
**correspondants de s1 et s2
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*new_s1;
	unsigned char	*new_s2;

	new_s1 = (unsigned char *) s1;
	new_s2 = (unsigned char *) s2;
	while (n > 0)
	{
		if (*new_s1 != *new_s2)
			return (*new_s1 - *new_s2);
		new_s1++;
		new_s2++;
		n--;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "James Harden";
    char str2[] = "James Hajjen";
    char str3[] = "James Harden";

    printf("Testing ft_memcmp:\n");
    printf("ft_memcmp(str1, str2, 12): %d\n", ft_memcmp(str1, str2, 12)); 
    printf("ft_memcmp(str1, str3, 12): %d\n", ft_memcmp(str1, str3, 12)); 

    printf("\nTesting standard memcmp:\n");
    printf("memcmp(str1, str2, 12): %d\n", memcmp(str1, str2, 12)); 
    printf("memcmp(str1, str3, 12): %d\n", memcmp(str1, str3, 12));

    return 0;
}*/
