/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:30:20 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/05 12:30:39 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

static int  ft_isupper(int c)
{
    return (c >= 'A' && c <= 'Z');
}

static int  ft_islower(int c)
{
    return (c >= 'a' && c <= 'z');
}

int	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
