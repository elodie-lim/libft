/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 01:48:15 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/14 01:48:15 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Deletes and frees the memory of the element passed as a parameter
**and all the subsequent elements, using 'del' and 'free'.
**Finally, the initial pointer must be set to NULL.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*previous;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		previous = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(previous, del);
	}
}
