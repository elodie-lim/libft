/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 12:26:06 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/30 12:26:06 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function reads a string representing an integer
** and returns the corresponding integer value. Leading 
** whitespace characters are ignored, and the conversion stops 
** as soon as a non-numeric character is encountered.
**
** @param const char *str The string to convert.
** @return The converted integer value. If the string does not 
** start with a valid number, the result may be unpredictable.
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	size_t	result;

	sign = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return ((int)(sign * result));
}
