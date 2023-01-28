/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josepc <josepc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:03:24 by josmarqu          #+#    #+#             */
/*   Updated: 2023/01/28 16:45:08 by josepc           ###   ########.fr       */
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
