/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:22:29 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/14 17:11:16 by josmarqu         ###   ########.fr       */
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
