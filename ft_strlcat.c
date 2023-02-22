/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:25:19 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/22 19:56:02 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	dst_len;
	unsigned int	len;

	i = 0;
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (dstsize + ft_strlen(src));
	len = dst_len + ft_strlen(src);
	dst += dst_len;
	while (dst_len++ < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}	
	dst[i] = '\0';
	return (len);
}
