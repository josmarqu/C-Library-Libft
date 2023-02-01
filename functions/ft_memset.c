/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:23:52 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/01 09:24:06 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, int n)
{
	unsigned char	*s_copy;

	s_copy = s;
	while (n--)
	{
		*s_copy = c;
		s_copy++;
	}
	return (s);
}
