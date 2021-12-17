/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 06:22:13 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/02 23:42:42 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count_digits(int n)
{
	unsigned int	d;
	long long		nbr;
	long long		puiss10;

	d = 1;
	nbr = n;
	puiss10 = 10;
	if (nbr < 0)
	{
		d++;
		puiss10 *= -1;
	}
	while (nbr / puiss10 > 0)
	{
		puiss10 *= 10;
		d++;
	}
	return (d);
}

char	*ft_itoa(int n)
{
	unsigned int	d;
	unsigned int	i;
	char			*a;
	long long		nbr;

	d = count_digits(n);
	i = 0;
	a = malloc(sizeof(char) * (d + 1));
	if (!a)
		return (NULL);
	nbr = n;
	a[d] = 0;
	if (n < 0)
	{
		a[0] = '-';
		i++;
		nbr *= -1;
	}
	while (d > i)
	{
		a[d - 1] = (nbr % 10) + 48;
		nbr /= 10;
		d--;
	}
	return (a);
}

// int	main(int ac, char **av)
// {
// 	int	n;

// 	n = atoi(av[1]);
// 	printf("digits =%d\n", count_digits(n));
// 	printf("itoa=%s\n", ft_itoa(n));
// 	return (0);
// }
