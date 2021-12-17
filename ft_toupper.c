/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:55:51 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/02 19:33:31 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*********TEST*********/

// int	main(int ac, char **av)
// {
// 	int	c;

// 	c = atoi(av[1]);
// 	printf("true value : %d\n", toupper(c));
// 	printf("my   value : %d\n", ft_toupper(c));
// 	return (0);
// }
