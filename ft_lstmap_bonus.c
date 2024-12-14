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

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new_lst;
	t_list		*new_elem;
	void		*content;

	if (!f || !del || !lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_elem = ft_lstnew(content);
		if (!new_elem)
		{
			free(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}
