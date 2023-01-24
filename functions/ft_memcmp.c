/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joselaptop <joselaptop@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 09:29:27 by joselaptop        #+#    #+#             */
/*   Updated: 2023/01/24 13:02:30 by joselaptop       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_memcmp(const void *s1, const void *s2, int n)
{
	unsigned char	*s1copy;
	unsigned char	*s2copy;

	s1copy = (unsigned char *) s1;
	s2copy = (unsigned char *) s2;
	while (n--)
	{
		if (*s1copy != *s2copy)
			return (*s1copy - *s2copy);
		s1copy++;
		s2copy++;
	}
	return (0);
}
