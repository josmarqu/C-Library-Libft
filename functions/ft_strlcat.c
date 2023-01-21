/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:25:23 by josmarqu          #+#    #+#             */
/*   Updated: 2023/01/21 19:01:06 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s);

int	ft_strlcat(char *dest, const char *src, int destsize)
{
	int	c;
	int	len;

	c = ft_strlen(dest);
	len = c + ft_strlen(src);
	if (len >= destsize)
		return (destsize + ft_strlen(src));
	dest = dest + c;
	while (c++ < destsize)
		*dest++ = *src++;
	*dest = '\0';
	return (len);
}
