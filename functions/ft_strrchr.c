/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joselaptop <joselaptop@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:02:12 by joselaptop        #+#    #+#             */
/*   Updated: 2023/01/23 11:30:08 by joselaptop       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	char	*scopy;

	scopy = (char *) s;
	scopy += ft_strlen(s) - 1;
	while (*scopy--)
		if (*scopy == c)
			return (scopy);
	return (0);
}
