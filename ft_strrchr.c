/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:26:39 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/06 18:50:35 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_copy;

	s_copy = (char *) s;
	s_copy += ft_strlen(s) - 1;
	while (*scopy)
	{
		if (*scopy == c)
			return (scopy);
		scopy--;
	}
	return (0);
}
