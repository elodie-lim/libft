/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 00:08:24 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/14 00:08:24 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putstr_fd("\n", fd);
}

/*
#include <fcntl.h>
int     main(int ac, char *av[])
{
        int     fd;

        fd = open(av[1], O_WRONLY);
        ft_putendl_fd("kelly_oubre", fd);
        close(fd);
        return (0);
}
*/