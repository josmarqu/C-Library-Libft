/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:27:39 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/18 16:44:02 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_s;
	unsigned int	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (s == NULL)
		return (NULL);
	sub_s = malloc(len * sizeof(char) + 1);
	if (sub_s == NULL)
		return (NULL);
	s += start;
	ft_strlcpy(sub_s, s, len + 1);
	return (sub_s);
}
