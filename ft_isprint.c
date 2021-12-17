/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:20:48 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/02 19:09:44 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*********TEST*********/

/*int	main(int ac, char **av)
{
	int	c;

	c = atoi(av[1]);
	printf("true value : %d\n", isprint(c));
	printf("my   value : %d\n", ft_isprint(c));
	return (0);
}*/
