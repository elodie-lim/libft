/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:30:20 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/16 15:27:56 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	if (!s)
		return (0);
	while (s[length])
		length++;
	return (length);
}
