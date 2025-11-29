/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin afomin@student.42kl.edu.my          #+#  +:+        #+#       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 13:17:27 by afomin            #+#    #+#             */
/*   Updated: 2025/10/24 16:55:17 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

short	ft_numlen(long n)
{
	short	size;

	size = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	while (n > 9)
	{
		n /= 10;
		size++;
	}
	return (size + 1);
}

char	*ft_itoa(int nint)
{
	long	n;
	short	size;
	char	*result;

	n = (long) nint;
	size = ft_numlen(n);
	result = malloc(size + 1);
	if (n < 0)
	{
		n *= -1;
		result[0] = '-';
	}
	result[size] = '\0';
	while (--size >= 0 && *(result + size) != '-')
	{
		*(result + size) = n % 10 + '0';
		n /= 10;
	}
	return (result);
}
/*
int	main(void)
{
	printf("Result: %s\n", ft_itoa(-23));
	printf("Result: %s\n", ft_itoa(23));
	printf("Result: %s\n", ft_itoa(-123456789));
	printf("Result: %s\n", ft_itoa(0));
}*/
