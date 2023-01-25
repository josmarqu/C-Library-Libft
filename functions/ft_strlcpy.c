/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josepc <josepc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:23:15 by josmarqu          #+#    #+#             */
/*   Updated: 2023/01/25 18:46:40 by josepc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s);

int	ft_strlcpy(char *dest, const char *src, int destsize)
{
	int	r;
	int	i;

	r = ft_strlen(src);
	i = destsize;
	while (i-- > 1)
		*dest++ = *src++;
	*dest = 0;
	return (r);
}
