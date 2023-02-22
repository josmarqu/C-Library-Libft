/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:23:52 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/22 17:17:28 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;	
	unsigned char	*s_copy;

	i = 0;
	s_copy = s;
	while (n--)
	{
		s_copy[i] = (char) c;
		i++;
	}
	return (s_copy);
}
