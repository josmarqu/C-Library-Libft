/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:23:39 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/22 20:09:30 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst_copy;
	const unsigned char	*src_copy = src;

	dst_copy = dst;
	i = 0;
	if (dst_copy == NULL && src_copy == NULL)
		return (NULL);
	if (dst_copy < src_copy)
	{
		while (i < n)
		{
			dst_copy[i] = src_copy[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			dst_copy[n - 1] = src_copy[n - 1];
			n--;
		}
	}
	return (dst_copy);
}
