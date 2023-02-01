/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:22:29 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/01 09:22:33 by josmarqu         ###   ########.fr       */
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
