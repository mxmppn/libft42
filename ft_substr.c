/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:42:06 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/16 16:29:45 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	char	*sub_s;

// 	i = 0;
// 	sub_s = malloc(sizeof(char) * (len + 1));
// 	if (start > ft_strlen(s))
// 		return (NULL);
// 	if (!sub_s)
// 		return (NULL);
// 	while (i < len && s[start])
// 	{
// 		sub_s[i] = s[start];
// 		start++;
// 		i++;
// 	}
// 	sub_s[i] = 0;
// 	return (sub_s);
// }

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*s_sub;

	i = 0;
	if (start > ft_strlen(s))
		start = ft_strlen(s);
	while (s[start + i] && i < len)
		i++;
	s_sub = malloc(sizeof(char) * (i + 1));
	if (!s_sub)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		s_sub[i] = s[start];
		start++;
		i++;
	}
	s_sub[i] = 0;
	return (s_sub);
}

// int	main(int ac, char **av)
// {
// 	char			*test;
// 	unsigned int	start;
// 	size_t			len;

// 	test = strdup(av[1]);
// 	start = atoi(av[2]);
// 	len = atoi(av[3]);
// 	printf("** MINE ** result = %s ** start = %d ** len = %lu\n",
// 		ft_substr(test, start, len), start, len);
// 	return (0);
// }
