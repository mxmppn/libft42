/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:25:28 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/16 16:27:31 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_cast;

	i = 0;
	s_cast = (unsigned char *)s;
	while (i < n)
	{
		if (s_cast[i] == (unsigned char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}

// int	main(int ac, char **av)
// {
// 	char	s[50];
// 	int		c;
// 	int		n;

// 	c = atoi(av[2]);
// 	n = atoi(av[3]);
// 	strcpy(s, av[1]);
// 	printf("** MINE ** : result = %p\n", ft_memchr(s, c, n));
// 	printf("------------------------\n");
// 	printf("** TRUE ** : result = %p\n", memchr(s, c, n));
// 	return (0);
// }
