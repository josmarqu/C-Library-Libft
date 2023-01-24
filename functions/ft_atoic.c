/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josepc <josepc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:31:00 by josmarqu          #+#    #+#             */
/*   Updated: 2023/01/24 19:28:39 by josepc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// test ft_atoi
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char *s);

int	ft_isdigit(int c);

int	ft_atoi(const char *nptr)
{
	char	sign;
	int		r;

	sign = 1;
	r = 0;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr != 0 && ft_isdigit(*nptr))
	{
		r += *nptr - '0';
		r *= 10;
		nptr++;
	}
	return ((r * sign) / 10);
}
