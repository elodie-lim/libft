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

#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substring;
    size_t  s_len;
    size_t  actual_len;

    if (!s)
        return (NULL);

    s_len = ft_strlen(s);

    // Si le point de départ est hors de la chaîne
    if (start >= s_len)
        return (ft_strdup(""));

    // Calculer la taille réelle du substring
    actual_len = s_len - start;
    if (len < actual_len)
        actual_len = len;

    // Allouer la mémoire pour le substring
    substring = (char *)malloc((actual_len + 1) * sizeof(char));
    if (!substring)
        return (NULL);

    // Copier la portion demandée
    ft_memcpy(substring, s + start, actual_len);
    substring[actual_len] = '\0';

    return (substring);
}
