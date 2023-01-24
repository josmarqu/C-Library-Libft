/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:31:00 by josmarqu          #+#    #+#             */
/*   Updated: 2023/01/24 17:30:38 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// test ft_atoi
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char *s)
{
	int	c;

	c = 0;
	while (s[c])
		c++;
	return (c);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		ft_atoi(const char *nptr)
{
	char	*s;
	char	sign;
	int		r;

	s = (char *) nptr;
	sign = 1;
	r = 0;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
		s++;
	while (*s != 0)
	{
		if (ft_isdigit(*s))
			r += *s - '0';
		else
		{
			r /= 10;	
			break;
		}
		r *= 10;
		s++;
	}
	return (r * sign);
}

int	main(void)
{	
	char *s = "+43-0";
	printf("ft_atoi: %d\n", ft_atoi(s));
	printf("atoi: %d\n", atoi(s));
	return (0);
}