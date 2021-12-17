/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:00:50 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/02 19:10:27 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*b_cast;

	i = 0;
	b_cast = (unsigned char *)b;
	while (i < len)
	{
		b_cast[i] = (unsigned char)c;
		i++;
	}
	b = (void *)b_cast;
	return (b);
}

// int	main(int ac, char **av)
// {
// 	char	b1[50];
// 	char	b2[50];
// 	int		c;
// 	int		len;

// 	strcpy(b1, av[1]);
// 	strcpy(b2, av[1]);
// 	c = atoi(av[2]);
// 	len = atoi(av[3]);
// 	printf("** MINE ** : result = %s\n", ft_memset(b1, c, len));
// 	printf("------------------------\n");
// 	printf("** TRUE ** : result = %s\n", memset(b2, c, len));
// 	return (0);
// }
