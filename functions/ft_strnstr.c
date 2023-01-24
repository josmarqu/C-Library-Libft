/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joselaptop <joselaptop@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:08:07 by joselaptop        #+#    #+#             */
/*   Updated: 2023/01/24 13:51:40 by joselaptop       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str);

char	*ft_strnstr(const char *haystack, const char *needle, int len)
{
	int	ch_counter;
	int s_len;
	unsigned char *s;
	unsigned char *f;

	ch_counter = 0;
	f_len = ft_strlen(needle);
	s = (unsigned char *) haystack;
	f = (unsigned char *) needle;

	while (--len)
	{
		if (*s == *f)
		{
			ch_counter += 1;
			*f++;
		}
		if (ch_counter == f_len)
		{
			return (s -  ch_counter)
		}
			*s++;
	}

}


//Test strnstr function

#include <bsd/stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char *str = "Hello World";
	char *find = "Wor";
	int len = 9;

	printf("strnstr: %s\n", strnstr(str, find, len));
}


