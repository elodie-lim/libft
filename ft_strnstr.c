/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 11:30:27 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/30 11:30:27 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**La fct recherche la premiere occurence de la sous-chaine
**'little' ds la chaine 'big' jusqu a une certaine
**longueur 'len'
**@param const char *big la chaine ds laquelle on 
**cherche la sous-chaine 
**@param const char *little la ss-chaine a rechercher
**@param size_t len la longueur max de recherche ds 'big'
**@return un pointeur vers le debut de la premiere occurence
**de 'little' ds 'big' ou NULL si aucun occurence
*/
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_length;

	little_length = ft_strlen(little);
	if (!little_length)
		return ((char *) big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			j++;
			if (j == little_length)
				return ((char *) big + i);
		}
		i++;
	}
	return ((void *) 0);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    const char *big = "i have no enemies";
    const char *little = "no";

    printf("Searching for 'no' in 'i have no enemies' (max 20 characters):\n");
    
    char *ft_result = ft_strnstr(big, little, 20);
    //char *std_result = strnstr(big, little, 20);

    printf("ft_strnstr: %s\n", ft_result ? ft_result : "NULL");
    //printf("strnstr:    %s\n", std_result ? std_result : "NULL");

    return 0;
}*/
