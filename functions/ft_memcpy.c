/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:23:08 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/01 09:23:15 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *source, int n);

void	*ft_memcpy(void *dest, const void *src, int n)
{
	return (ft_memmove(dest, src, n));
}
