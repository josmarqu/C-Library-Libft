/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:26:39 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/21 12:15:22 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	unsigned int	c_copy;
	char			*s_copy;

	i = ft_strlen(s);
	c_copy = (unsigned char) c;
	s_copy = (char *) s;
	while (i > 0)
	{
		if (s_copy[i] == (unsigned char) c_copy)
			return (s_copy + i);
		i--;
	}
	if (s_copy[i] == (unsigned char) c_copy)
		return (s_copy + i);
	return (NULL);
}
