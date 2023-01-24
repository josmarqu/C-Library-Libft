/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joselaptop <joselaptop@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:17:28 by joselaptop        #+#    #+#             */
/*   Updated: 2023/01/24 13:03:54 by joselaptop       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, int n)
{
	unsigned char	*scopy;

	scopy = (unsigned char *) s;
	while (n--)
		if (scopy[n] == c)
			return (scopy + n);
	return (0);
}
