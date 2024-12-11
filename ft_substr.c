/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 01:21:25 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/10 01:21:25 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La fonction ft_substr extrait une sous-chaine d'une chaine donnee.
** Elle alloue une nouvelle chaine de caracteres (avec malloc)
** qui commence a l'index 'start' de la chaine 's' et dont la taille
** maximale est definie par 'len'.
**
** @param const char *s : La chaine source de laquelle extraire
** la nouvelle sous-chaine.
** @param unsigned int start : L'index de depart de la sous-chaine
** dans la chaine source 's'.
** @param size_t len : La taille maximale de la sous-chaine a extraire.
**
** @return Une nouvelle chaine de caracteres correspondant a la
** sous-chaine extraite. Retourne NULL si l'allocation echoue ou si
** la chaine source est NULL.
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	actual_len;
	char	*substring;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	actual_len = s_len - start;
	if (len < actual_len)
		actual_len = len;
	substring = (char *)malloc((actual_len + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	ft_memcpy(substring, s + start, actual_len);
	substring[actual_len] = '\0';
	return (substring);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*source = "Jeremy Lin";
	char	*result;

	// test 1 : extraire "Jeremy"
	result = ft_substr(source, 0, 6);
	printf("test 1 : %s\n", result);
	free(result);

	// test 2 : debut>longueur de la chaine
	result = ft_substr(source, 20, 5);
	printf("test 2 : %s\n", result);
	free(result);

	// test 4 : taille>la longueur restante
	result = ft_substr(source, 7, 10);
	printf("test 4 : %s\n", result);
	free(result);

	// test 5 : chaine source vide
	result = ft_substr("", 0, 5);
	printf("test 5 : %s\n", result);
	free(result);

	return (0);
}*/
