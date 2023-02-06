/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:33:42 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/06 11:22:38 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_intlen(int n)
{
	int	len;

	len = 0;
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
	char			*r_string;
	unsigned int	n_len;
	unsigned int	i;

	if (n == 0)
		return (0);
	n_len = ft_intlen(n);
	r_string = (char *)malloc(sizeof(char) * (n_len + 1));
	if (r_string == NULL)
		return (NULL);
	i = 0;
	r_string[n_len] = '\0';
	if (n < 0)
	{
		n = -n;
		r_string[0] = '-';
		i = 1;
	}
	while (n_len > i)
	{
		n_len--;
		r_string[n_len] = '0' + (n % 10);
		n = n / 10;
	}
	return (r_string);
}
