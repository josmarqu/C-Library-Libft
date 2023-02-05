/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:25:19 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/05 18:43:40 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s);

int	ft_strlcat(char *dest, const char *src, size_t destsize)
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
