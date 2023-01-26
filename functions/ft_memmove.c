/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josepc <josepc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:12:27 by jose              #+#    #+#             */
/*   Updated: 2023/01/26 17:54:30 by josepc           ###   ########.fr       */
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
