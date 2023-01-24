/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:03:24 by josmarqu          #+#    #+#             */
/*   Updated: 2023/01/21 19:29:27 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*scopy;

	scopy = (char *) s;
	while (*scopy++ != 0)
		if (*scopy == c)
			return (scopy);
	return (0);
}
