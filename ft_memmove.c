/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 00:41:26 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/25 00:41:26 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**La fct memmove() copie n octets depuis la zone memoire src 
**vers la zone memoire dest, meme si les zones se 
**chevauchent. 
**Si chevauchement : on copie a partir du n-eme caractere
**sinon normal : du debut au n-eme caractere
**@param void *dest
**@param const void *src
**@param size_t n
*/
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;

    if (!dest || !src)
        return (NULL);

    if (src < dest)
    {
        while (n > 0)
        {
            ((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
            n--;
        }
    }
    else
    {
        i = 0;
        while (i < n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }

    return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20] = "Lamborghini";
    char str2[20] = "Lamborghini";

    ft_memmove(str + 3, "Ferrari", 8);
    printf("str ft_memmove: %s\n", str);  //"LamFerrari"
    memmove(str2 + 3, "Ferrari", 8);
    printf("str memmove: %s\n", str2);
    return 0;
}*/