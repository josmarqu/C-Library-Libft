/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:35:53 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/05 17:43:08 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		s[i] = f(i, &s[i]);
		i++;
	}
}
