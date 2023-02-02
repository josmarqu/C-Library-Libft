/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:19:37 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/01 12:33:49 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int		ft_strlen(const char *s);

char	*ft_strchr(const char *s, int c);

int		ft_strlcpy(char *dest, const char *src, int destsize);

char	*ft_substr(char const *s, unsigned int start, size_t len);

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