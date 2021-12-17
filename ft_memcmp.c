/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:43:14 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/16 17:30:55 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_as_s;
	unsigned char	*s2_as_s;

	i = 0;
	s1_as_s = (unsigned char *)s1;
	s2_as_s = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n && s2_as_s[i] == s1_as_s[i])
		i++;
	if (i == n)
		return (s1_as_s[i - 1] - s2_as_s[i - 1]);
	return (s1_as_s[i] - s2_as_s[i]);
}

// int	main(int ac, char **av)
// {
// 	char	s1[50];
// 	char	s2[50];
// 	size_t	n;

// 	n = atoi(av[3]);
// 	strcpy(s1, av[1]);
// 	strcpy(s2, av[2]);
// 	printf("** MINE ** : dst = %d\n", ft_memcmp(s1, s2, n));
// 	printf("------------------------\n");
// 	printf("** TRUE ** : dst = %d\n", memcmp(s1, s2, n));
// 	return (0);
// }
