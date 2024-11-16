/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:30:20 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/05 12:30:39 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The memset() function fills the first n bytes of the memory area 
**pointed to by s with the constant byte c.
**void *s designe le bloc de memoire a initialiser
**int c correspond a la valeur a laquelle chaque octet du bloc
**sera initalise.
**size_t n est le nombre d octets a initialiser dans le bloc de memoire.
*/

//#include "libft.h"
# include <stddef.h>


void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*new_s;

	new_s = (unsigned char *) s;
	while (n)
	{
		*new_s = (unsigned char) c;
		new_s++;
		n--;
	}
	return (s);
}

#include <stdio.h>
int main()
{
    char buffer[6] = "hello";  
    printf("Avant memset: %s\n", buffer);  // Affichera "hello"
    
    // Remplir les 3 premiers caractères du buffer avec 'A'
    ft_memset(buffer, 'A', 3);
    
    // Affichage après memset
    printf("Après memset: %s\n", buffer);  // Affichera "AAAllo"
    
    return 0;
}