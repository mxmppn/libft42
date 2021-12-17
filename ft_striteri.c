/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 21:09:56 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/02 19:06:36 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void	foo(unsigned int i, char *c)
// {
// 	*c += 1;
// }

// int	main(void)
// {
// 	char	str[] = "Sacralise gentillement.";
// 	printf ("'%s'\n", str);
// 	ft_striteri (str, &foo);
// 	printf ("'%s'\n", str);
// }
