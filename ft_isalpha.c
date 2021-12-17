/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:17:02 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/02 19:09:31 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}

/*********TEST*********/

/*void	main(int ac, char **av)
{
	char	c;

	c = '+';
	printf("true value : %d\n", isalpha(c));
	printf("my   value : %d\n", ft_isalpha(c));
}*/
