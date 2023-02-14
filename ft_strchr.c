/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:24:18 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/14 16:19:57 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;	
	char			*s_copy;

	i = 0;
	s_copy = (char *) s;
	while (s_copy[i] != '\0')
	{
		if (s_copy[i] == c)
			return (s_copy + i);
		i++;
	}
	if (s_copy[i] == c)
		return (s_copy + i);
	return (NULL);
}
