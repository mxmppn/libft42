/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:57:57 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/16 16:24:33 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count_words(char const *s, char c)
{
	int				i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			n++;
		while (s[i] != c && s[i])
			i++;
	}
	return (n);
}

static int	dup_word(char **split, int i, const char *s, int len)
{
	int	j;

	split[i] = (char *)malloc (sizeof (char) * (len + 1));
	if (!split[i])
	{
		while (i >= 0)
		{
			free (split[i]);
			i--;
		}
		free (split);
		return (1);
	}
	j = 0;
	while (j < len && s[j])
	{
		split[i][j] = s[j];
		j++;
	}
	split[i][j] = 0;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	i = 0;
	j = 0;
	k = 0;
	split = (char **)malloc (sizeof (char *) * (count_words (s, c) + 1));
	if (!split)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[j] != c && s[j])
			j++;
		if (s[i])
			if (dup_word (split, k++, s + i, (j - i)) != 0)
				return (NULL);
		i = j;
	}
	split[k] = NULL;
	return (split);
}
