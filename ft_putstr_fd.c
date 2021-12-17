/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:49:19 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/02 19:07:56 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	write(fd, s, i);
	return ;
}

// int	main(int ac, char **av)
// {
// 	char	*s;
// 	int		fd;

// 	s = av[1];
// 	fd = atoi(av[2]);
// 	ft_putstr_fd(s, fd);
// 	return (0);
// }
