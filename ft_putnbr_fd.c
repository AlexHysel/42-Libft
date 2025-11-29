/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin afomin@student.42kl.edu.my          #+#  +:+        #+#       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:09:45 by afomin            #+#    #+#             */
/*   Updated: 2025/10/24 17:03:16 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	div;

	div = 1;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	while (div < n)
		div *= 10;
	if (div > 1)
		div /= 10;
	while (div > 0)
	{
		ft_putchar_fd(n / div + '0', fd);
		n %= div;
		div /= 10;
	}
}
/*
int	main(void)
{
	ft_putnbr_fd(0, 1);
}
*/
