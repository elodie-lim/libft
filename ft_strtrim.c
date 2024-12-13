/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:46:35 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/13 17:46:35 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strtrim - Supprime les caracteres specifies du debut 
**et de la fin d'une chaine.
** 
** La fonction ft_strtrim prend une chaine d'entree (s1) 
**et une chaine de caracteres (set) contenant
** les caracteres a retirer. Elle retourne une nouvelle chaine allouee 
**dynamiquement, qui est une version de s1 sans les caracteres presents 
**dans set au debut et a la fin.
** 
** @param s1 La chaine a trimmer. Ne doit pas etre NULL.
** @param set Les caracteres a supprimer. Ne doit pas etre NULL.
** 
** @return Un pointeur vers la nouvelle chaine allouee dynamiquement 
**sans les caracteres indesirables.
**Retourne NULL si une allocation echoue ou si une des entrees NULL.
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, &s1[start], len + 1);
	return (result);
}

/*
#include <stdio.h>

int main()
{
    const char *s1 = "  james harden  ";
    const char *set = " ";
    char *trimmed = ft_strtrim(s1, set);
    
    if (trimmed)
    {
        printf("Original: '%s'\n", s1);
        printf("Trimmed: '%s'\n", trimmed);
        free(trimmed);
    }
    else
    {
        printf("Memory allocation failed or invalid input.\n");
    }
    
    return 0;
}*/