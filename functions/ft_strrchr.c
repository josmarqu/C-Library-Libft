/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:26:39 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/01 09:26:45 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	char	*s_copy;

	s_copy = (char *) s;
	s_copy += ft_strlen(s) - 1;
	while (*scopy)
	{
		if (*scopy == c)
			return (scopy);
		scopy--;
	}
	return (0);
}
