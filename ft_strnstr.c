/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:26:26 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/22 20:18:55 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		l_len;
	char		*b_cpy;
	char		*l_cpy;

	i = 0;
	j = 0;
	l_len = ft_strlen(little);
	b_cpy = (char *)big;
	l_cpy = (char *)little;
	if (l_len == 0)
		return (b_cpy);
	while (b_cpy[i] != '\0' && i < len)
	{
		while (b_cpy[i + j] == l_cpy[j] && (i + j) < len)
		{
			if (j == l_len - 1)
				return (&b_cpy[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
