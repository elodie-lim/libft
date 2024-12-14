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
**libere la memoire de l'element passe en argument
**en utilisant la fonction 'del' puis avec free. La memoire
**de 'next' ne doit pas etre free.
*/

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}
