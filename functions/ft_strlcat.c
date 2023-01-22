/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josepc <josepc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:25:23 by josmarqu          #+#    #+#             */
/*   Updated: 2023/01/22 16:32:46 by josepc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dest, const char *src, int destsize)
{
	int	c;
	int	len;

	c = ft_strlen(dest);
	if (destsize < c)
	{
		return (c + destsize);
	}
	len = c + ft_strlen(src);
	dest += c;
	while (c++ < destsize - 1)
		*dest++ = *src++;
	*dest = 0;
	return (len);
}
