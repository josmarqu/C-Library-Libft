/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joselaptop <joselaptop@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:25:23 by josmarqu          #+#    #+#             */
/*   Updated: 2023/01/26 11:49:32 by joselaptop       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dest, const char *src, int destsize)
{
	int	dest_len;
	int	len;

	dest_len = ft_strlen(dest);
	if (destsize <= dest_len)
		return (destsize + ft_strlen(src));
	len = dest_len + ft_strlen(src);
	dest += dest_len;
	while (dest_len++ < destsize - 1)
		*dest++ = *src++;
	*dest = 0;
	return (len);
}
