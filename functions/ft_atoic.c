/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josepc <josepc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:31:00 by josmarqu          #+#    #+#             */
/*   Updated: 2023/01/26 17:02:39 by josepc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// test ft_atoi
#include <stdio.h>
#include <stdlib.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int ft_isspace(int c) {
    if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r') {
        return 1;
    }
    else {
        return 0;
    }
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

#include <stdio.h>

int ft_atoi(const char *nptr);

int main(void) {
    char test1[] = "123";
    char test2[] = "-456";
    char test3[] = "+789";
    char test4[] = "1a2b3c";

    printf("%d\n", ft_atoi(test1));  // should print 123
    printf("%d\n", ft_atoi(test2));  // should print -456
    printf("%d\n", ft_atoi(test3));  // should print 789
    printf("%d\n", ft_atoi(test4));  // should print 1
    return 0;
}