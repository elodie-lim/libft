/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 01:01:07 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/11 16:28:47 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Cree une copie d'une chaine de caracteres.
** 
** @param s La chaine de caracteres a copier.
** @return Un pointeur vers une nouvelle chaine de caracteres 
**contenant la copie,
**         ou NULL si l'allocation de memoire echoue.
*/

#include <stdlib.h>

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*dest;

	size = ft_strlen(s) + 1;
	dest = (char *) malloc(size * sizeof(char));
	if (!dest)
		return ((void *) 0);
	ft_strlcpy(dest, s, size);
	return (dest);
}

/*
#include <stdio.h>

int main(void)
{
    const char *source = "Yao Ming";
    char *copy;

    copy = ft_strdup(source);
    if (!copy)
    {
        printf("Memory allocation failed.\n");
        return (1);
    }

    printf("Original string: %s\n", source);
    printf("Copied string: %s\n", copy);

    free(copy);
    return (0);
}*/
