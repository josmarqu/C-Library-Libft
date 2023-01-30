/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joselaptop <joselaptop@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:06:06 by joselaptop        #+#    #+#             */
/*   Updated: 2023/01/30 11:34:36 by joselaptop       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_s;
	unsigned int	i;

	sub_s = malloc(len * sizeof(char));
	if (!sub_s)
		return (NULL);
	s += start;
	i = 0;
	while (i < len)
	{
		sub_s[i] = s[i];
		i++;
	}
	return (sub_s);
}
