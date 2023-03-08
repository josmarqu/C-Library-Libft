/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:23:15 by josmarqu          #+#    #+#             */
/*   Updated: 2023/03/08 19:41:09 by josmarqu         ###   ########.fr       */
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

static char	**free_return(char *s_free, char **as_free, char **s_retu)
{
	if (s_free != NULL)
		free(s_free);
	if (as_free != NULL)
		ft_free_str_arr(as_free);
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

static char	*init_strtrim(char const *s, char c)
{
	char	*str_char;

	str_char = malloc(sizeof(char) * 2);
	if (str_char == NULL)
		return (NULL);
	str_char[0] = c;
	str_char[1] = '\0';
	s = ft_strtrim(s, str_char);
	free(str_char);
	if (s == NULL)
		return (NULL);
	return ((char *)s);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	count;
	char			**split;

	s = init_strtrim(s, c);
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
