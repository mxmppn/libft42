/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 22:42:05 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/02 19:07:33 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}

// int	main(int ac, char **av)
// {
// 	char	c;
// 	int		fd;

// 	c = av[1][0];
// 	fd = atoi(av[2]);
// 	ft_putchar_fd(c, fd);
// 	return (0);
// }
