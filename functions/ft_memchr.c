/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joselaptop <joselaptop@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:17:28 by joselaptop        #+#    #+#             */
/*   Updated: 2023/01/24 11:23:45 by joselaptop       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, int n)
{
	unsigned char	*scopy;

	scopy = (unsigned char *) s;
	while (n--)
		if (scopy[n] == c)
			return (scopy + n);
	return (0);
}

// test memchr
#include <bsd/stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char str1[] = "Hello";

	printf("%p\n", memchr(str1, 'l', 1));
}
