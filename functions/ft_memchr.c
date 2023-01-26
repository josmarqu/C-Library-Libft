/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josepc <josepc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:17:28 by joselaptop        #+#    #+#             */
/*   Updated: 2023/01/26 18:08:52 by josepc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, int n)
{
	unsigned char	*s_copy;

	s_copy = (unsigned char *) s;
	while (n--)
	{
		if (s_copy == c)
			return (s_copy + n);
		s_copy++;
	}
	return (0);
}
