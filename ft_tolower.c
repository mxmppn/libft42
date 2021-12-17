/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:11:18 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/02 19:33:27 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*********TEST*********/

// int	main(int ac, char **av)
// {
// 	int	c;

// 	c = atoi(av[1]);
// 	printf("true value : %d\n", tolower(c));
// 	printf("my   value : %d\n", ft_tolower(c));
// 	return (0);
// }