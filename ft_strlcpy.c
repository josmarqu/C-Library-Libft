/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:25:37 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/06 18:49:25 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	unsigned int	src_len;

	src_len = ft_strlen(src);
	while (destsize-- > 1)
		*dest++ = *src++;
	*dest = 0;
	return (src_len);
}	
