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
**La fonction ft_itoa() convertit un entier de type int 
**en une chaine de caracteres (string) representant cet entier.
**Elle gere egalement les entiers negatifs en ajoutant 
**un '-' au debut de la chaine.
**
**@param int n : L'entier a convertir en chaine de caracteres.
**@return char* : La fonction retourne un pointeur vers la chaine 
**de caracteres representant l'entier. Si une erreur survient 
**lors de l'allocation memoire, la fonction retourne NULL.
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
	result = malloc(len + 1 * sizeof(char));
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

/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{

    int numbers[] = {0, -1, 42, -12345, 2147483647, -2147483648};
    size_t num_tests = sizeof(numbers) / sizeof(numbers[0]);

    for (size_t i = 0; i < num_tests; i++)
    {
        int n = numbers[i];
        char *result = ft_itoa(n);
        if (result)
        {
            printf("ft_itoa(%d) = \"%s\"\n", n, result);
            free(result); //free allocated memory
        }
        else
        {
            printf("ft_itoa(%d) failed to allocate memory.\n", n);
        }
    }

    return 0;
}
*/