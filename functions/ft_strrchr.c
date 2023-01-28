/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josepc <josepc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:02:12 by joselaptop        #+#    #+#             */
/*   Updated: 2023/01/28 16:57:07 by josepc           ###   ########.fr       */
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
