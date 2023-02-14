/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:26:39 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/14 16:32:30 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*s_copy;

	i = ft_strlen(s);
	s_copy = (char *) s;
	while (i > 0)
	{
		if (s_copy[i] == c)
			return (s_copy + i);
		i--;
	}
	if (s_copy[i] == c)
		return (s_copy + i);
	return (NULL);
}
