/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:27:39 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/22 20:19:50 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	s_len;
	char			*sub_s;

	if (len == 0)
		return (ft_strdup(""));
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (s == NULL)
		return (NULL);
	if (len > s_len - start)
		len = s_len - start;
	sub_s = (char *) malloc(sizeof(char) * (len + 1));
	if (sub_s == NULL)
		return (NULL);
	s += start;
	ft_strlcpy(sub_s, s, len + 1);
	return (sub_s);
}
