/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:08:07 by joselaptop        #+#    #+#             */
/*   Updated: 2023/01/24 16:26:38 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str);

char	*ft_strnstr(const char *haystack, const char *needle, int len)
{
	int		ch_counter;
	int		f_len;
	char	*s;
	char	*f;

	ch_counter = 0;
	f_len = ft_strlen(needle);
	s = (char *) haystack;
	f = (char *) needle;
	while (len-- && ch_counter != f_len)
	{
		if (*s == *f)
		{
			ch_counter += 1;
			f++;
		}
			s++;
	}
	if (ch_counter == f_len)
		return (s - ch_counter);
	return (0);
}
