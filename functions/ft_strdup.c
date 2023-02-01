/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:24:43 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/01 09:24:47 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *s);

int	ft_strlcpy(char *dest, const char *src, int destsize);

char	*ft_strdup(const char *s)
{
	unsigned int	s_len;
	char			*s_copy;

	s_len = ft_strlen(s);
	s_copy = malloc(s_len * sizeof(char));
	ft_strlcpy(s_copy, s, s_len + 1);
	return (s_copy);
}
