/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:43:48 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/03 17:16:25 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*src_as_s;
	unsigned char	*dst_as_s;

	i = 0;
	src_as_s = (unsigned char *)src;
	dst_as_s = (unsigned char *)dst;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		dst_as_s[i] = src_as_s[i];
		i++;
	}
	return (dst);
}

// int	main(int ac, char **av)
// {
// 	const char	*src;
// 	char		*dst1;
// 	char		*dst2;
// 	size_t		n;

// 	dst1 = strdup(av[1]);
// 	dst2 = strdup(av[1]);
// 	src = strdup(av[2]);
// 	// dst1 = NULL;
// 	// dst2 = NULL;
// 	// src = NULL;
// 	n = atoi(av[3]);
// 	// printf("Before memcpy ; dest = %s\n\n", dst1);
// 	// printf("After  memcpy ; \n");
// 	printf("** MINE ** : dst = %s\n", ft_memcpy(NULL, NULL, 12));
// 	printf("------------------------\n");
// 	printf("** TRUE ** : dst = %s\n", memcpy(NULL, NULL, 12));
// 	return (0);
// }
