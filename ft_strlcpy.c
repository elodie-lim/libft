/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 00:40:46 by elodlim           #+#    #+#             */
/*   Updated: 2024/11/25 00:40:46 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**La fct a pour but de copier les n caracteres 
**de la chaine src se finissant par le \0 vers dest
**se terminant lui-meme par \0
**@param char *dst la chaine d arrivee
**@param char *src la chaine dont on copie les n caracteres
**@param size_t n les n caracteres a copier
**@return la chaine copiee jusqu a n-1
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	length;

	length = ft_strlen(src);
	if (!dst)
		return (length);
	i = 0;
	while (i + 1 < size && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	return (length);
}