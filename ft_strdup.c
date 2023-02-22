/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:24:43 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/22 13:17:46 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	s_len;
	char			*s_copy;

	s_len = ft_strlen(s);
	s_copy = malloc(s_len * sizeof(char) + 1);
	if (s_copy == NULL)
		return (NULL);
	ft_strlcpy(s_copy, s, s_len + 1);
	return (s_copy);
}
