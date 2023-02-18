/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:25:19 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/18 15:52:54 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	len;

	i = 0;
	dest_len = ft_strlen(dest);
	if (destsize <= dest_len)
		return (destsize + ft_strlen(src));
	len = dest_len + ft_strlen(src);
	dest += dest_len;
	while (dest_len++ < destsize - 1)
	{
		dest[i] = src[i];
		i++;
	}	
	dest[i] = '\0';
	return (len);
}
