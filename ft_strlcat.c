/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 02:55:19 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/30 02:55:19 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**La fct concatene une chaine source src a une chaine dst
**de maniere securisee, en limitant la taille totale de dst
**a un maximum donne soit size
**@param char *dst la chaine de caracteres destination
**@param const char *src la chaine de caracteres source
**@size_t size la taille totale finale max de dst
**@return la longueur finale theorique de la destination
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	src_len = ft_strlen(src);
	while (dst[i] != '\0')
	{
		i++;
	}
	dst_len = i;
	if (size == 0 || size <= dst_len)
		return (size + src_len);
	while (src[j] != '\0' && j < size - dst_len - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (src_len + dst_len);
}

/*
#include <stdio.h>
#include <bsd/string.h>

int main(void) {
    char dst[50] = "Yao";
    const char *src = " Ming";

    size_t size = sizeof(dst);
    size_t result = ft_strlcat(dst, src, size);

    printf("Result of ft_strlcat: %zu\n", result);
    printf("Final dst: %s\n\n", dst);

    char dst_std[50] = "Yao";
    size_t result_std = strlcat(dst_std, src, size);
    printf("Result of strlcat: %zu\n", result_std);
    printf("Final dst: %s\n", dst_std);

    return 0;
}*/