/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:23:15 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/06 18:47:56 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	**init_split(char const *s, char c)
{
	char	**split;

	split = (char **)malloc(sizeof(char *) * split_count(s, c) + 1);
	if (split == NULL)
		return (NULL);
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char			**split;
	unsigned int	s_start;
	unsigned int	i;
	unsigned int	j;

	if (*s == NULL)
		return (NULL);
	s = ft_strtrim(s, &c);
	split = init_split(s, c);
	s_start = 0;
	i = 0;
	j = 0;
	while (s[i++])
	{
		if (s[i] == c && s[i - 1] != c)
		{
			split[j] = ft_substr(s, s_start, i - s_start);
			j++;
			s_start = i + 1;
		}
		else if (i >= 1 && s[i - 1] == c)
			s_start = i;
	}
	split[j] = ft_substr(s, s_start, i - s_start);
	return (split);
}
