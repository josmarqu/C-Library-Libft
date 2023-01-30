/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joselaptop <joselaptop@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:02:17 by joselaptop        #+#    #+#             */
/*   Updated: 2023/01/30 13:21:34 by joselaptop       ###   ########.fr       */
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
	ft_strlcpy(conc_s, s1, s1_len + 1);
	ft_strlcpy(conc_s + s1_len, s2, s2_len + 1);
	return (conc_s);
}
