/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josepc <josepc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:23:15 by josmarqu          #+#    #+#             */
/*   Updated: 2023/01/25 18:31:10 by josepc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s);

int	ft_strlcpy(char *dest, const char *src, int destsize)
{
	int	c;
	int	n;

	c = ft_strlen(src);
	n = c;
	if (destsize > c)
		c = destsize;
	while (c-- > 1)
		*dest++ = *src++;
	*dest = 0;
	return (n);
}
