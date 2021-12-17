/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:03:26 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/02 20:54:20 by mpepin           ###   ########lyon.fr   */
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

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	if (dstsize != 0)
	{
		while (i < dstsize - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

// int	main(int ac, char **av)
// {
// 	char	dest1[9] = "gigatest";
// 	char	dest2[9] = "gigatest";
// 	char	src[5] = "sexe";
// 	int		size = atoi(av[1]);

// 	printf("** MINE ** : %lu ; OUTPUT STRING : %s\n",
// 		ft_strlcpy(dest1, src, size), dest1);
// 	printf("------------------------\n");
// 	printf("** TRUE ** : %lu ; OUTPUT STRING : %s\n",
// 		strlcpy(dest2, src, size), dest2);
// 	return (0);
// }
