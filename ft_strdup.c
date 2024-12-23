/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 01:01:07 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/23 02:43:42 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Creates a copy of a string.
** 
** @param s: The string to copy.
** @return A pointer to a new string containing the copy,
**         or NULL if memory allocation fails.
*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*dest;

	size = ft_strlen(s) + 1;
	dest = (char *) malloc(size * sizeof(char));
	if (!dest)
		return ((void *) 0);
	ft_strlcpy(dest, s, size);
	return (dest);
}
