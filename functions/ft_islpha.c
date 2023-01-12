/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islpha.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:56:24 by josmarqu          #+#    #+#             */
/*   Updated: 2023/01/12 17:09:37 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Determine if a given integer 
 * corresponds to an alphabest letter in ASCII table.
 *
 * @param c Character to evaluate.
 *
 * @return 1 if the character is an alphabet letter, 0 otherwise.
 */
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
