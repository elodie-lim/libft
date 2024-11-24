/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:48:55 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/16 17:51:48 by elodlim          ###   ########.fr       */
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

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*new_s;

	if (!s)
		return (NULL);

	new_s = (unsigned char *) s;
	while (n > 0)
	{
		*new_s = (unsigned char) c;
		new_s++;
		n--;
	}
	return (s);
}

/*#include <stdio.h>
int main()
{
    char buffer[6] = "hello";  
    printf("Before memset: %s\n", buffer); 
    ft_memset(buffer, 'A', 3);
    printf("After memset: %s\n", buffer);
    
    return 0;
}*/
