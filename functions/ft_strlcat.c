/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josepc <josepc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:25:23 by josmarqu          #+#    #+#             */
/*   Updated: 2023/01/22 12:17:42 by josepc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s)
{
	int	c;

	c = 0;
	while (*s++)
		c++;
	return (c);
}

int	ft_strlcat(char *dest, const char *src, int destsize)
{
	int	c;
	int	len;

	c = ft_strlen(dest);
	len = c + ft_strlen(src);
	if (len >= destsize)
		return (destsize + ft_strlen(src));
	dest += c;
	while (c++ < destsize)
		*dest++ = *src++;
	*dest = 0;
	return (len);
}

// Test ft_strlcat

#include <bsd/stdio.h>
#include <bsd/string.h>

int	 main(void)
{
	char dest[20] = "Hello";
	char src[20] = "World";
	int destsize = 7;

	printf("strlcat: %ld\n", strlcat(dest, src, destsize));
	printf("dest: %s\n", dest);
	return (0);
}