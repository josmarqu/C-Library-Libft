/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:22:57 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/22 20:22:59 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*s1_copy;
	unsigned char	*s2_copy;

	i = 0;
	s1_copy = (unsigned char *) s1;
	s2_copy = (unsigned char *) s2;
	while (n > 0 && (s1_copy[i] != '\0' || s2_copy[i] != '\0'))
	{
		if (s1_copy[i] != s2_copy[i])
			return (s1_copy[i] - s2_copy[i]);
		i++;
		n--;
	}
	return (0);
}
