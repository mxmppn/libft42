/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:42:54 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/16 16:31:41 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static size_t	ft_strlen(const char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	c_asc;

	i = 0;
	c_asc = c % 256;
	while ((s[i]) && (s[i] != c_asc))
		i++;
	if (s[i] == c_asc)
		return ((char *)&s[i]);
	return (NULL);
}

// int	main(int argc, char const *argv[])
// {
// 	if (argc == 3)
// 	{
// 		printf("** MINE **->%p<- a ete trouve dans %s\n",
// 			ft_strchr(argv[1], atoi(argv[2])), argv[1]);
// 		printf("------------------------\n");
// 		printf("** TRUE **->%p<- a ete trouve dans %s\n",
// 			strchr(argv[1], atoi(argv[2])), argv[1]);
// 	}
// 	return (0);
// }
