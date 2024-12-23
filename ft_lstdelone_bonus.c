/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 01:44:56 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/14 01:44:56 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Frees the memory of the element passed as an argument
**using the 'del' function and then with free. The memory
**of 'next' should not be freed.
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}
