/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 01:51:47 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/14 01:51:47 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Itere sur la liste 'lst' et applique la fonction 'f'
**au contenu de chaque element. Cree une nouvelle liste
**resultant des applications successives de 'f'. 
**La fonction 'del' est la pour detruire le contenu d'un
**element si necessaire.
*/

#include "libft.h"
#include <stdlib.h>

static void	*clean_up(t_list *current_node, void (*del)(void *))
{
	t_list	*temp;

	while (current_node)
	{
		temp = current_node->next;
		ft_lstdelone(current_node, del);
		current_node = temp;
	}
	return (NULL);
}

static t_list	*add_node(t_list *new_node, t_list **current, t_list **first)
{
	if (!(*first))
	{
		*first = new_node;
		*current = new_node;
	}
	else
	{
		(*current)->next = new_node;
		*current = new_node;
	}
	return (new_node);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first_node;
	t_list	*current_node;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	first_node = NULL;
	while (lst)
	{
		new_node = ft_lstnew((*f)(lst->content));
		if (!new_node)
			return (clean_up(first_node, del));
		add_node(new_node, &current_node, &first_node);
		lst = lst->next;
	}
	return (first_node);
}
