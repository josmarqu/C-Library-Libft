/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josepc <josepc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:08:07 by joselaptop        #+#    #+#             */
/*   Updated: 2023/01/28 16:55:48 by josepc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str);

char	*ft_strnstr(const char *haystack, const char *needle, int len)
{
	unsigned int	ch_counter;
	unsigned int	n_len;
	char			*h;
	char			*n;

	ch_counter = 0;
	n_len = ft_strlen(needle);
	h = (char *) haystack;
	n = (char *) needle;
	while (len-- && ch_counter != n_len)
	{
		if (*h == *n)
		{
			ch_counter += 1;
			n++;
		}
			h++;
	}
	if (ch_counter == n_len)
		return (h - ch_counter);
	return (0);
}
