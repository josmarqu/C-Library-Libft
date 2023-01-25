/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josepc <josepc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:23:15 by josmarqu          #+#    #+#             */
/*   Updated: 2023/01/25 18:38:45 by josepc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s)
{
	int	c;

	c = 0;
	while (s[c])
		c++;
	return (c);
}

int	ft_strlcpy(char *dest, const char *src, int destsize)
{
	int	r;
	int i;

	r = ft_strlen(src);
	i = destsize;
	while (i-- > 1)
		*dest++ = *src++;
	*dest = 0;
	return (r);
}

// test ft_strlcpy
#include <bsd/stdio.h>
#include <bsd/string.h>
#include <stdlib.h>

int	main(void)
{
	char	*str;
	char	*str2;

	str = "Hello World!";
	str2 = malloc(ft_strlen(str) * sizeof(char));
	printf("strlcpy: %d\n", ft_strlcpy(str2, str, 13));
	printf("str2: %s\n", str2);
}
