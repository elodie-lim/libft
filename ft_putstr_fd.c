/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 00:05:11 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/14 00:05:11 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s && fd != -1)
		write(fd, s, ft_strlen(s));
}

/*
#include <fcntl.h>
int     main(int ac, char *av[])
{
        int     fd;

        fd = open(av[1], O_RDWR);
        ft_putstr_fd("\nend!", fd);
        close(fd);
		return (0);
}
*/