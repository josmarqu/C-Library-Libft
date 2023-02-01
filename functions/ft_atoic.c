/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:20:01 by josmarqu          #+#    #+#             */
/*   Updated: 2023/02/01 09:20:14 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c);

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	int		sign;
	int		result;

	sign = 1;
	result = 0;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (ft_isspace(*nptr))
		nptr++;
	while (ft_isdigit(*nptr))
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (result * sign);
}
