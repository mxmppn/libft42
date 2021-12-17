/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:42:06 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/17 00:36:27 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	int				j;
	size_t			result;

	i = 0;
	j = 0;
	while (i < dstsize && dst[i])
		i++;
	if (dstsize <= i)
		return (dstsize + ft_strlen(src));
	else
		result = ft_strlen(src) + ft_strlen(dst);
	while (i + 1 < dstsize && src[j])
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (result);
}

/*********TEST*********/

// int	main(int ac, char **av)
// {
// 	char	dest1[9] = "gigatest";
// 	char	dest2[9] = "gigatest";
// 	char	src[5] = "sexe";
// 	int		size = atoi(av[1]);

// 	printf("** MINE ** : %lu ; OUTPUT STRING : %s\n",
// 		ft_strlcat(dest1, src, size), dest1);
// 	printf("------------------------\n");
// 	printf("** TRUE ** : %lu ; OUTPUT STRING : %s\n",
// 		strlcat(dest2, src, size), dest2);
// 	return (0);
// }
