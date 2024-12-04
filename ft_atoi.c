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
** La fonction lit une chaîne de caractères représentant un entier
**et retourne la valeur entière correspondante. Les espaces blancs 
**initiaux sont ignorés, et la conversion s'arrête dès qu'un caractère 
**non numérique est rencontré.
**
** @param const char *str La chaîne de caractères à convertir.
** @return La valeur entière convertie. Si la chaîne ne commence pas par un 
** nombre valide, le résultat peut être imprévisible.
**/

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

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char *test1 = "42";
    const char *test2 = "   ++-+-123";

    printf("Test 1: Input: '%s'\n", test1);
    printf("ft_atoi: %d\n", ft_atoi(test1));
    printf("atoi:    %d\n\n", atoi(test1));

    printf("Test 2: Input: '%s'\n", test2);
    printf("ft_atoi: %d\n", ft_atoi(test2));
    printf("atoi:    %d\n", atoi(test2));

    return 0;
}*/