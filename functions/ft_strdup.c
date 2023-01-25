/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josepc <josepc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:46:20 by josepc            #+#    #+#             */
/*   Updated: 2023/01/25 18:45:29 by josepc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *s);

int	ft_strlcpy(char *dest, const char *src, int destsize);

char	*ft_strdup(const char *s)
{
	int		s_len;
	char	*scopy;

	s_len = ft_strlen(s);
	scopy = malloc(s_len * sizeof(char));
	ft_strlcpy(scopy, s, s_len + 1);
	return (scopy);
}
