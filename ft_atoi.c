/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:45:50 by afomin            #+#    #+#             */
/*   Updated: 2025/10/24 18:09:48 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	long	result;
	short	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str++ - '0';
	}
	return (sign * result);
}
/*
int	main()
{
	printf("%d\n", ft_atoi("12"));
	printf("%d\n", ft_atoi(" 132412"));
	printf("%d\n", ft_atoi("  -123"));
	printf("%d\n", ft_atoi("+123a"));
	printf("%d\n", ft_atoi("+-132"));
}
*/
