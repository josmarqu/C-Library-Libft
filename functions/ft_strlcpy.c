/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:25:37 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/01 09:25:40 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s);

int	ft_strlcpy(char *dest, const char *src, int destsize)
{
	unsigned int	src_len;

	src_len = ft_strlen(src);
	while (destsize-- > 1)
		*dest++ = *src++;
	*dest = 0;
	return (src_len);
}	
