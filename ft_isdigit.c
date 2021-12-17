/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:36:41 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/02 19:09:40 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*********TEST*********/

/*void	main(int ac, char **av)
{
	int	c;

	c = atoi(av[1]);
	printf("true value : %d\n", isdigit(c));
	printf("my   value : %d\n", ft_isdigit(c));
}*/
