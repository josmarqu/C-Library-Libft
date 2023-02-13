/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:23:39 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/13 16:04:16 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_copy;
	unsigned const char	*src_copy;

	if (n == 0 || dest == src)
		return (dest);
	dest_copy = (unsigned char *) dest;
	src_copy = (unsigned const char *) src;
	if (dest_copy < src_copy)
		while (n--)
			*dest_copy++ = *src_copy++;
	else
		while (n--)
			*(dest_copy + n) = *(src_copy + n);
	return (dest);
}
