/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:19:37 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/07 21:21:40 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	s_start;
	unsigned int	s_end;
	unsigned int	s_len;

	s_start = 0;
	s_end = 0;
	s_len = ft_strlen(s1);
	while (ft_strchr(set, s1[s_start]))
		s_start++;
	if (s_len == s_start)
		return (ft_substr(s1, 0, 0));
	s_end += s_len - 1;
	while (ft_strchr(set, s1[s_end]))
		s_end--;
	s_end = (s_len - 1) - s_end;
	return (ft_substr(s1, s_start, s_len - (s_start + s_end)));
}
