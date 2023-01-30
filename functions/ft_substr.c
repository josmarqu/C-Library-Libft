/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joselaptop <joselaptop@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:06:06 by joselaptop        #+#    #+#             */
/*   Updated: 2023/01/30 12:05:41 by joselaptop       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// test substr

#include <stdio.h>

int	main(void)
{
	char	*str = "Hello World!";
	char	*sub_str;

	sub_str = ft_substr(str, 6, 5);
	printf("%s", sub_str);
	return (0);
}