/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:26:39 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/13 16:07:42 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_copy;

	s_copy = (char *) s;
	s_copy += ft_strlen(s) - 1;
	while (*s_copy)
	{
		if (*s_copy == c)
			return (s_copy);
		s_copy--;
	}
	return (0);
}
