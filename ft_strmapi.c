/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 21:27:05 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/16 18:16:13 by mpepin           ###   ########lyon.fr   */
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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*s_f;
	unsigned int	i;

	len = ft_strlen(s);
	s_f = malloc(sizeof(char) * (len + 1));
	if (!s_f)
		return (NULL);
	i = 0;
	while (s[i])
	{
		s_f[i] = (*f)(i, s[i]);
		i++;
	}
	s_f[i] = 0;
	return (s_f);
}

// char	foo(unsigned int i, char c)
// {
// 	return (c + i);
// }

// int	main(int ac, char **av)
// {
// 	char	str[] = "Suce ma beteu gentillement.";

// 	printf("'%s'\n", str);
// 	printf ("'%s'\n", ft_strmapi(str, &foo));
// 	printf("adresse de foo = %p\n", &foo);
// 	return (0);
// }
