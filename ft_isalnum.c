/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:59:24 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/02 19:09:27 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}

/*********TEST*********/

// int	main(int ac, char **av)
// {
// 	int	c;

// 	c = atoi(av[1]);
// 	printf("true value : %d\n", isalnum(c));
// 	printf("my   value : %d\n", ft_isalnum(c));
// 	return (0);
// }
