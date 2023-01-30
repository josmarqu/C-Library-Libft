/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joselaptop <joselaptop@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:06:06 by joselaptop        #+#    #+#             */
/*   Updated: 2023/01/30 12:07:23 by joselaptop       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *s);

int	ft_strlcpy(char *dest, const char *src, int destsize);

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
