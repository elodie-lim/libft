/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 23:53:03 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/13 23:53:03 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	length;
	size_t	i;

	if (!s || !f)
		return ;
	length = ft_strlen(s);
	i = 0;
	while (i < length)
	{
		(*f)(i, &s[i]);
		i++;
	}
}
