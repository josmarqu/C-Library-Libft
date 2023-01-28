/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josepc <josepc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:23:15 by josmarqu          #+#    #+#             */
/*   Updated: 2023/01/28 16:55:55 by josepc           ###   ########.fr       */
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
