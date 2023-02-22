/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:22:44 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/22 20:00:01 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_copy;
	unsigned char	*s2_copy;

	i = 0;
	s1_copy = (unsigned char *) s1;
	s2_copy = (unsigned char *) s2;
	while (n > 0)
	{
		if (s1_copy[i] != s2_copy[i])
			return (s1_copy[i] - s2_copy[i]);
		i++;
		n--;
	}
	return (0);
}
