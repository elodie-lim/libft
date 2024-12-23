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
**Iterates over the 'lst' list and applies the 'f' function
**to the content of each element. Creates a new list
**resulting from the successive applications of 'f'.
**The 'del' function is used to destroy the content of an
**element if necessary.
*/

#include "libft.h"

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
