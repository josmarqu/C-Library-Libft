/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:23:15 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/13 12:43:48 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	split_count(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			count++;
		i++;
	}
	return (count);
}

static char	**init_split(int count)
{
	char			**split;

	split = (char **)malloc(sizeof(char *) * (count + 2));
	if (split == NULL)
		return (NULL);
	return (split);
}

static void	free_split(char **split)
{
	unsigned int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static char	**split_gen(char **split, char const *s, char c)
{
	unsigned int	s_start;
	unsigned int	i;
	unsigned int	j;

	s_start = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if ((s[i] == c && s[i + 1] != c) || (s[i] == 0))
		{	
			ft_strlcpy(split[j], s + s_start, i - s_start);
			if (split[j] == NULL)
			{
				free_split(split);
				return (NULL);
			}			
			s_start = i + 1;
			j++;
		}
		i++;
	}
	split[j] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char			**split;
	unsigned int	count;

	if (*s == 0)
		return (NULL);
	s = ft_strtrim(s, &c);
	if (s == NULL)
		return (NULL);
	count = split_count(s, c);
	split = init_split(count);
	if (split == NULL)
		return (NULL);
	if (count == 0)
	{
		split[0] = (char *)s;
		split[1] = NULL;
		return (split);
	}
	return (split_gen(split, s, c));
}
