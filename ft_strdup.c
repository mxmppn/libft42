/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:05:42 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/16 16:28:59 by mpepin           ###   ########lyon.fr   */
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

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*s1_cpy;
	size_t	i;

	size = ft_strlen(s1);
	s1_cpy = malloc(sizeof(char) * (size + 1));
	if (!s1_cpy)
		return (NULL);
	i = 0;
	s1_cpy[size] = 0;
	while (i < size)
	{
		s1_cpy[i] = s1[i];
		i++;
	}
	return (s1_cpy);
}
