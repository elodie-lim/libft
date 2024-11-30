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

	if (!dst && size == 0)
		return (0);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	i = 0;
	while (dst_len + i + 1 < size && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
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