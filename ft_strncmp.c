/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:33:32 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/30 10:33:32 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**La fct compare chaque caractere des deux chaines
**jusqu a ce qu un caractere different soit trouve
**ou jusqu a ce que n caracteres aient ete compares
**@param const char *s1 la premiere chaine de caracteres
**@param const char *s2 la 2e chaine comparee avec la 1ere
**@param size_t n le nb de caracteres a comparer ds les chaines
**return un entier correspond a la difference entre les 
**deux caracteres, et savoir lequel des deux caracteres
**etait 'le plus grand', si une difference entre les chaines
**a ete trouvee avant que tous les caracteres soient compares.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		char_diff;

	char_diff = 0;
	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	if (!char_diff && i < n)
		char_diff = (unsigned char) s1[i] - (unsigned char) s2[i];
	return (char_diff);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    const char *str1 = "yaoming";
    const char *str2 = "yao";
    const char *str3 = "yaomingo";
    const char *str4 = "yaoming";

    size_t n = 9; 

    printf("Testing ft_strncmp:\n");
    printf("ft_strncmp(str1, str2, %zu): %d\n", n, ft_strncmp(str1, str2, n));
    printf("ft_strncmp(str1, str3, %zu): %d\n", n, ft_strncmp(str1, str3, n));
    printf("ft_strncmp(str1, str4, %zu): %d\n", n, ft_strncmp(str1, str4, n));

    printf("\nTesting standard strncmp:\n");
    printf("strncmp(str1, str2, %zu): %d\n", n, strncmp(str1, str2, n));
    printf("strncmp(str1, str3, %zu): %d\n", n, strncmp(str1, str3, n));
    printf("strncmp(str1, str4, %zu): %d\n", n, strncmp(str1, str4, n));

    return 0;
}*/