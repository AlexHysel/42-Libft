/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:46:23 by afomin            #+#    #+#             */
/*   Updated: 2025/10/23 18:28:14 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char s, int fd);

void	ft_putendl_fd(char *str, int fd)
{
	while (*str)
		write(fd, str++, 1);
	ft_putchar_fd('\n', fd);
}
