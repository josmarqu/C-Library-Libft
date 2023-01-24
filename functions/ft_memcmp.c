/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joselaptop <joselaptop@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 09:29:27 by joselaptop        #+#    #+#             */
/*   Updated: 2023/01/24 09:38:57 by joselaptop       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	int		ft_memcmp(const void *s1, const void *s2, int n)
	{

	}
*/

// test memcmp
#include <bsd/stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char str1[] = "Hello";
	char str2[] = "Hillo";

	printf("%d\n", strncmp(str1, str2, 1));
}