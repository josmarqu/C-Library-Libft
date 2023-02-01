/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:23:39 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/01 09:23:41 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *source, int n)
{
	unsigned char		*dest_copy;
	unsigned const char	*source_copy;

	if (n == 0 || dest == source)
		return (dest);
	dest_copy = (unsigned char *) dest;
	source_copy = (unsigned const char *) source;
	if (dest_copy < source_copy)
		while (n--)
			*dest_copy++ = *source_copy++;
	else
		while (n--)
			*(dest_copy + n) = *(source_copy + n);
	return (dest);
}
