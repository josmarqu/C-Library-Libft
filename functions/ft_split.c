/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:23:15 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/03 12:12:47 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_strlcpy(char *dest, const char *src, int destsize)
{
	unsigned int	src_len;

	src_len = ft_strlen(src);
	while (destsize-- > 1)
		*dest++ = *src++;
	*dest = 0;
	return (src_len);
}	

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_s;

	sub_s = malloc(len * sizeof(char));
	if (!sub_s)
		return (NULL);
	s += start;
	ft_strlcpy(sub_s, s, len + 1);
	return (sub_s);
}

int	split_count(char const *s, char c)
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
	return (count + 1);
}

char	*ft_strchr(const char *s, int c)
{
	char	*s_copy;

	s_copy = (char *) s;
	while (*s_copy)
	{
		if (*s_copy == c)
			return (s_copy);
		s_copy++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	s_start;
	unsigned int	s_final;
	unsigned int	s_len;

	s_start = 0;
	s_final = 0;
	s_len = ft_strlen(s1);
	while (ft_strchr(set, s1[s_start]))
		s_start++;
	s_final += s_len - 1;
	while (ft_strchr(set, s1[s_final]))
		s_final--;
	s_final = (s_len - 1) - s_final;
	return (ft_substr(s1, s_start, s_len - (s_start + s_final)));
}

char	**ft_split(char const *s, char c)
{
	unsigned int	s_count;
	unsigned int	s_start;
	unsigned int 	i;
	unsigned int	j;
	char			**split;

	if (*s == '\0')
		return (0);
	s = ft_strtrim(s, &c);
	s_count = split_count(s, c);
	s_start = 0;
	i = 0;
	j = 0;
	split = (char **)malloc(sizeof(char *) * s_count + 1);

	while (s[i])
	{
		if (s[i] == c && s[i-1] != c)
		{
			split[j] = ft_substr(s, s_start, i - s_start);
			j++;
			s_start = i + 1;
		}
		else if (i >= 1 && s[i-1] == c)
			s_start = i;
		i++;
	}
	split[j] = ft_substr(s, s_start, i - s_start);
	return (split);
}

// test ft_split
int	main(void)
{
	char *s = "\0php\0llopppppwoprldp";
	char c = '\0';
	char **split = ft_split(s, c);
	//print **split
	while (*split)
	{
		printf("%s\n", *split);
		split++;
	} 
	return (0);
}