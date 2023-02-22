/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:33:42 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/22 20:11:20 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	i;
	unsigned int	n_len;
	char			*r_str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	n_len = ft_intlen(n);
	r_str = (char *)malloc(sizeof(char) * (n_len + 1));
	if (r_str == NULL)
		return (NULL);
	i = 0;
	r_str[n_len] = '\0';
	if (n < 0)
	{
		n = -n;
		r_str[0] = '-';
		i = 1;
	}
	while (n_len > i)
	{
		n_len--;
		r_str[n_len] = '0' + (n % 10);
		n = n / 10;
	}
	return (r_str);
}
