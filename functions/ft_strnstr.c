/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:26:26 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/01 09:26:30 by josmarqu         ###   ########.fr       */
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
