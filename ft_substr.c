/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:27:39 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/06 18:51:13 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_s;

	sub_s = malloc(len * sizeof(char));
	if (sub_s == NULL)
		return (NULL);
	s += start;
	ft_strlcpy(sub_s, s, len + 1);
	return (sub_s);
}
