/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose <jose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:12:27 by jose              #+#    #+#             */
/*   Updated: 2023/01/14 16:11:47 by jose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *source, int n)
{
	unsigned char		*dst;
	const unsigned char	*src;

	if (n == 0 || dest == source)
		return (dest);
	dst = (unsigned char *) dest;
	src = (const unsigned char *) source;
	if (dst < src)
	{
		while (n--)
			*dst++ = *src++;
	}
	else
	{
		while (n--)
			*(dst + n) = *(src + n);
	}
	return (dest);
}
