/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 01:50:31 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/14 01:50:31 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Itere sur la liste 'lst' et applique la fonction
**'f' au contenu de chaque element.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
