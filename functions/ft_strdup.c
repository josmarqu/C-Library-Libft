/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josepc <josepc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:46:20 by josepc            #+#    #+#             */
/*   Updated: 2023/01/28 16:45:28 by josepc           ###   ########.fr       */
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
