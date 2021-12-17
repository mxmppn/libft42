/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:50:28 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/16 17:28:13 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	decr_memshift(unsigned char *dst_cast,
	unsigned char *src_cast, size_t len)
{
	size_t	i;

	i = len;
	while (i)
	{
		i--;
		dst_cast[i] = src_cast[i];
	}
}

static void	incr_memshift(unsigned char *dst_cast,
	unsigned char *src_cast, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst_cast[i] = src_cast[i];
		i++;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*src_cast;
	unsigned char	*dst_cast;

	src_cast = (unsigned char *)src;
	dst_cast = (unsigned char *)dst;
	if (!dst && !src)
		return (dst);
	if ((int)src < (int)dst)
		decr_memshift(dst_cast, src_cast, len);
	else
		incr_memshift(dst_cast, src_cast, len);
	return (dst);
}

// int	main(int ac, char **av)
// {
// 	char	src[50];
// 	char	dst[50];
// 	char	dst2[50];
// 	int		len;

// 	strcpy(dst, av[1]);
// 	strcpy(dst2, av[1]);
// 	strcpy(src, av[2]);
// 	len = atoi(av[3]);
// 	printf("** MINE ** : result = %s\n", ft_memmove(dst, src, len));
// 	printf("------------------------\n");
// 	printf("** TRUE ** : result = %s\n", memmove(dst2, src, len));
// 	return (0);
// }
