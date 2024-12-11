/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:27:58 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/11 16:27:58 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_memchr - Recherche la premiere occurrence d'un caractere 
**dans une zone memoire.
** La fct examine les octets de la zone memoire en partant de l'adresse
** pointee par s jusqu'a ce qu'elle trouve une correspondance avec c ou qu'elle
** ait examine n octets.
**
** @param s: Pointeur vers la zone memoire ou effectuer la recherche.
** @param c: Caractere a chercher (interprete comme un unsigned char).
** @param n: Nombre maximal d'octets a examiner.
**
** @return:
** - Un pointeur vers la premiere occurrence du caractere trouve.
** - NULL si le caractere n'est pas trouve dans les n premiers octets.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	to_find;
	size_t			i;

	str = (unsigned char *)s;
	to_find = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == to_find)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char str[] = "kelly oubre";

    void *result1 = ft_memchr(str, 'o', 12);
    void *expected1 = memchr(str, 'o', 12);
    printf("Test 1: %s\n", result1 == expected1 ? "Passed" : "Failed");

    void *result2 = ft_memchr(str, 'y', 12);
    void *expected2 = memchr(str, 'y', 12);
    printf("Test 2: %s\n", result2 == expected2 ? "Passed" : "Failed");

    void *result3 = ft_memchr(str, 'z', 12);
    void *expected3 = memchr(str, 'z', 12);
    printf("Test 3: %s\n", result3 == expected3 ? "Passed" : "Failed");

    void *result4 = ft_memchr(str, '\0', 12);
    void *expected4 = memchr(str, '\0', 12);
    printf("Test 4: %s\n", result4 == expected4 ? "Passed" : "Failed");

    return 0;
}*/
