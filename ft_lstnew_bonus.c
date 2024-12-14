/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 01:38:06 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/14 01:38:06 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**alloue avec malloc et renvoie un nouvel element
**la variable membre 'content' est initialisee a l'aide
**de la valeur du parametre 'content'. La variable 'next' est 
**initialisee a NULL.
*/

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return ((void *) 0);
	new_node->content = content;
	new_node->next = (void *) 0;
	return (new_node);
}
