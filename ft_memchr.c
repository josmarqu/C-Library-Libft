/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:21:38 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/22 20:21:41 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, int n)
{
	unsigned int	i;
	unsigned char	*s_copy;

	i = 0;
	s_copy = (unsigned char *) s;
	while (n > 0)
	{
		if (s_copy[i] == (unsigned char) c)
			return (s_copy + i);
		i++;
		n--;
	}
	return (0);
}
