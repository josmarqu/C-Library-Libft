/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:22:44 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/01 09:22:47 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, int n)
{
	unsigned char	*s1_copy;
	unsigned char	*s2_copy;

	s1_copy = (unsigned char *) s1;
	s2_copy = (unsigned char *) s2;
	while (n-- && *s1_copy && *s2_copy)
	{
		if (*s1_copy != *s2_copy)
			return (*s1_copy - *s2_copy);
		s1_copy++;
		s2_copy++;
	}
	return (0);
}
