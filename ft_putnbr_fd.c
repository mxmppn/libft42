/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:56:20 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/15 13:42:57 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned long long	starting_power10(int n)
{
	long long				nbr;
	unsigned long long		power10;

	nbr = n;
	power10 = 1;
	if (nbr < 0)
		nbr = -nbr;
	while (nbr / power10 >= 10)
	{
		power10 *= 10;
	}
	return (power10);
}

static void	ft_putdigit_fd(int n, int fd)
{
	char	my_digit;

	my_digit = 48 + n;
	write(fd, &my_digit, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned long long	power10;
	long long			nbr;
	int					digit;

	power10 = starting_power10(n);
	nbr = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		nbr = -nbr;
	}
	digit = nbr / power10;
	ft_putdigit_fd(digit, fd);
	nbr = nbr - (power10 * digit);
	power10 /= 10;
	while (power10 > 0)
	{
		digit = nbr / power10;
		ft_putdigit_fd(digit, fd);
		nbr = nbr - (power10 * digit);
		power10 /= 10;
	}
}

// int	main(int ac, char **av)
// {
// 	int	n;
// 	int	fd;

// 	n = atoi(av[1]);
// 	fd = atoi(av[2]);
// 	printf("puissance de 10=%llu\n", starting_power10(n));
// 	ft_putnbr_fd(n, fd);
// 	return (0);
// }
