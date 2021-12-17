/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 02:04:40 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/16 18:16:26 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

// static char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	char	*sub_s;

// 	i = 0;
// 	if (start < (unsigned int)len)
// 	{
// 		sub_s = malloc(sizeof(char) * (start + 2));
// 		while (i < (unsigned int)len)
// 		{
// 			sub_s[i] = s[start];
// 			start++;
// 			i++;
// 		}
// 		return (sub_s);
// 	}
// 	return (NULL);
// }

static int	is_in_str(const char c, const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && is_in_str(s1[i], set) != -1)
		i++;
	while (j > i && is_in_str(s1[j], set) != -1)
		j--;
	return (ft_substr(s1, i, j - i + 1));
}

// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 	{
// 		printf("** MINE ** result = %s ** set = %s\n",
// 			ft_strtrim(av[1], av[2]), av[2]);
// 		return (0);
// 	}
// 	printf("/ERROR NBR ARGS/\n");
// 	return (-1);
// }
