/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:56:44 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/16 18:25:24 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**La fonction permet de remplir les n premiers octets 
**de la zone memoire pointee par s par des 0
**Elle prend en parametre un pointeur s 
**qui pointe vers le debut de l adresse
**memoire a remplir, et un size_t n qui correspond 
**au nb d octets a ecrire dans la zone memoire
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
