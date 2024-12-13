/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 23:58:18 by elodlim           #+#    #+#             */
/*   Updated: 2024/12/13 23:58:18 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(char));
}

/*
#include <fcntl.h>
int	main(int ac, char *av[])
{
	int		fd,

	fd = open(av[1], O_WRONLY);
	ft_putchar_fd('a', fd);
	close(fd);
	return(0);
}*/
