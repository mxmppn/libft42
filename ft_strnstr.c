/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:08:53 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/03 18:59:19 by mpepin           ###   ########lyon.fr   */
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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i] == needle[j] && haystack[i] && needle[j] && i < len)
		{
			i++;
			j++;
		}
		if (j == ft_strlen(needle))
			return ((char *)&haystack[i - j]);
		i = i - j + 1;
		j = 0;
	}
	return (NULL);
}

/*************************TEST*************************/

// int	main(int ac, char **av)
// {
// 	char	*haystack;
// 	char	*needle;
// 	size_t	len;

// 	haystack = strdup(av[1]);
// 	needle = strdup(av[2]);
// 	len = atoi(av[3]);
// 	printf("** MINE ** result =%s\n",
// 		ft_strnstr(haystack, needle, len));
// 	printf("\n----------------------------\n");
// 	printf("** TRUE ** result =%s\n\n",
// 		strnstr(haystack, needle, len));
// 	return (0);
// }
