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
**Supprime et libere la memoire de l'element passe en parametre
**et de tous les elements qui suivent, a l'aide de 'del' et de free.
**Enfin, le pointeur initial doit etre mis a NULL.
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
