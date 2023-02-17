/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:00:41 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/17 09:53:03 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s_res;

	i = 0;
	s_res = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (s_res == NULL)
		return (NULL);
	while (s[i])
	{
		s_res[i] = f(i, s[i]);
		i++;
	}	
	s_res[i] = '\0';
	return (s_res);
}
