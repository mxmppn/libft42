/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:29:47 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/02 19:09:37 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*********TEST*********/

// int	main(int ac, char **av)
// {
// 	int	c;

// 	c = atoi(av[1]);
// 	printf("true value : %d\n", isascii(c));
// 	printf("my   value : %d\n", ft_isascii(c));
// 	return (0);
// }
