/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joselaptop <joselaptop@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:12:27 by jose              #+#    #+#             */
/*   Updated: 2023/01/26 11:47:37 by joselaptop       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *source, int n)
{
	char		*dst;
	const char	*src;

	if (n == 0 || dest == source)
		return (dest);
	dst = (char *) dest;
	src = (const char *) source;
	if (dst < src)
		while (n--)
			*dst++ = *src++;
	else
		while (n--)
			*(dst + n) = *(src + n);
	return (dest);
}
