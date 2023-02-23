/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:23:15 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/23 18:54:19 by josmarqu         ###   ########.fr       */
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

static void	free_split(char **split)
{
	unsigned int	i;

	i = 0;
	while (split[i] != NULL)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static char	**free_return(char *s_free, char **as_free, char **s_retu)
{
	if (s_free != NULL)
		free(s_free);
	if (as_free != NULL)
		free_split(as_free);
	return (s_retu);
}

static char	**split_gen(char **split, char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	s_start;

	s_start = 0;
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
		if ((s[i] == c && s[i - 1] != c) || (s[i] == '\0' && s[i] != c))
		{
			split[j] = ft_substr(s, s_start, i - s_start);
			if (split[j] == NULL)
				return (free_return((char *)s, split, NULL));
			j++;
		}
		else if (s[i] != c && s[i - 1] == c)
			s_start = i;
	}
	split[j] = NULL;
	return (free_return((char *)s, NULL, split));
}

char	**ft_split(char const *s, char c)
{
	unsigned int	count;
	char			*str_char;
	char			**split;

	str_char = (char *)malloc(sizeof(char) * 2);
	if (str_char == NULL)
		return (NULL);
	str_char[0] = c;
	str_char[1] = '\0';
	s = ft_strtrim(s, str_char);
	free(str_char);
	if (s == NULL)
		return (NULL);
	count = split_count(s, c);
	if (count == 0 && s[0] == '\0')
	{
		split = (char **)malloc(sizeof(char *));
		if (split == NULL)
			return (free_return((char *)s, NULL, NULL));
		split[0] = NULL;
		return (free_return((char *)s, NULL, split));
	}	
	split = (char **)malloc(sizeof(char *) * (count + 2));
	if (split == NULL)
		return (free_return((char *)s, NULL, NULL));
	return (split_gen(split, s, c));
}
