/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:24:18 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/01 09:24:23 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*s_copy;

	s_copy = (char *) s;
	while (*s_copy)
	{
		if (*s_copy == c)
			return (s_copy);
		s_copy++;
	}
	return (0);
}
