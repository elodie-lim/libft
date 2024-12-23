/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:30:42 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/13 19:30:42 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The ft_itoa() function converts an integer of type int
**into a string representing that integer.
**It also handles negative integers by adding a '-' 
**at the beginning of the string.
**
**@param int n : The integer to convert into a string.
**@return char* : The function returns a pointer to the string
**representing the integer. If an error occurs during memory allocation,
**the function returns NULL.
*/

#include "libft.h"

static int	len_num(long nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		i++;
		nbr = -nbr;
	}
	if (nbr == 0)
		i++;
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	long	nbr;
	char	*result;

	nbr = n;
	len = len_num(nbr);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (nbr < 0)
		nbr = -nbr;
	i = len - 1;
	if (n == 0)
		result[0] = '0';
	while (nbr != 0)
	{
		result[i] = (nbr % 10) + '0';
		nbr /= 10;
		i--;
	}
	if (n < 0)
		result[0] = '-';
	result[len] = '\0';
	return (result);
}
