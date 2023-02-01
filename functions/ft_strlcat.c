/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:25:19 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/01 09:25:22 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s);

int	ft_strlcat(char *dest, const char *src, int destsize)
{
	int				dest_len;
	unsigned int	len;

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
