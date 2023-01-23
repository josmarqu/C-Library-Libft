/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joselaptop <joselaptop@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:03:24 by josmarqu          #+#    #+#             */
/*   Updated: 2023/01/23 13:36:37 by joselaptop       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, int n);
int		ft_strlen(const char *s);

char	*ft_strchr(const char *s, int c)
{
	return (ft_memchr(s, c, ft_strlen(s)));
}
