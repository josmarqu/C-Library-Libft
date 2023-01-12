/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:27:30 by josmarqu          #+#    #+#             */
/*   Updated: 2023/01/12 17:14:37 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Determine if a given integer 
 * corresponds to a digit in ASCII table.
 *
 * @param c Character to evaluate.
 *
 * @return 1 if the int corresponds to a digit letter, 0 otherwise.
 */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
