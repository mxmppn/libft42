/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:31:03 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/16 16:29:28 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < n - 1 && s1[i] == s2[i])
		i++;
	if ((s1[i] == 0 || s2[i] == 0) && i == n)
		return (0);
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

// int	main(int ac, char const *av[])
// {
// 	char	*s1;
// 	char	*s2;
// 	size_t	n;

// 	s1 = strdup(av[1]);
// 	s2 = strdup(av[2]);
// 	n = atoi(av[3]);
// 	printf("** TRUE ** result = %d\n",
// 		strncmp(s1, s2, n));
// 	printf("------------------------\n");
// 	printf("** MINE ** result = %d\n",
// 		ft_strncmp(s1, s2, n));
// 	return (0);
// }
