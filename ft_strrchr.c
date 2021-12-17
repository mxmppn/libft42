/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:58:03 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/16 16:31:26 by mpepin           ###   ########lyon.fr   */
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

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		occ;
	int		c_asc;

	i = 0;
	occ = -1;
	c_asc = c % 256;
	while (i < ft_strlen(s) + 1)
	{
		if (s[i] == c_asc)
			occ = i;
		i++;
	}
	if (occ != -1)
		return ((char *)&s[occ]);
	return (NULL);
}

// int	main(int argc, char const *argv[])
// {
// 	if (argc == 3)
// 	{
// 		printf("**true**->%p<- a ete trouve dans %s\n",
// 			strrchr(argv[1], atoi(argv[2])), argv[1]);
// 		printf("**mine**->%p<- a ete trouve dans %s\n",
// 			ft_strrchr(argv[1], atoi(argv[2])), argv[1]);
// 	}
// 	return (0);
// }
