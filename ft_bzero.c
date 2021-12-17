/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:18:17 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/02 19:09:20 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*s_cast;

	i = 0;
	s_cast = (char *)s;
	while (i < n)
	{
		s_cast[i] = 0;
		i++;
	}
	s = (void *)s_cast;
}

// int	main(int ac, char **av)
// {
// 	char	s1[50];
// 	char	s2[50];
// 	int		n;
// 	int		i;

// 	strcpy(s1, av[1]);
// 	strcpy(s2, av[2]);
// 	n = atoi(av[3]);
// 	i = 0;
// 	ft_bzero(s1, n);
// 	bzero(s2, n);
// 	printf("** MINE ** : result = \n");
// 	while (i < 50)
// 	{
// 		if (s1[i] == 0)
// 			printf("|0|");
// 		else
// 			printf("%c", s1[i]);
// 		i++;
// 	}
// 	i = 0;
// 	printf("------------------------\n");
// 	printf("** TRUE ** : result = \n");
// 	while (i < 50)
// 	{
// 		if (s2[i] == 0)
// 			printf("|0|");
// 		else
// 			printf("%c", s2[i]);
// 		i++;
// 	}
// 	return (0);
// }
