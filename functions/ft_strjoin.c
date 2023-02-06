/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:25:03 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/06 11:20:18 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *s);

int	ft_strlcpy(char *dest, const char *src, int destsize);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*conc_s;
	unsigned int	s1_len;
	unsigned int	s2_len;	

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	conc_s = malloc((s1_len + s2_len) * sizeof(char));
	if (conc_s == NULL)
		return (NULL);
	ft_strlcpy(conc_s, s1, s1_len + 1);
	ft_strlcpy(conc_s + s1_len, s2, s2_len + 1);
	return (conc_s);
}
