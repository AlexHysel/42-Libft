/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:43:37 by afomin            #+#    #+#             */
/*   Updated: 2025/10/24 19:15:26 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void	tolower_(unsigned int index, char *str)
{
	if (str[index] >= 'A' && str[index] <= 'Z')
		str[index] += 32;
}
*/

#include "libft.h"

void	ft_striteri(char *s, void (*func)(unsigned int, char*))
{
	size_t	i;

	if (s != NULL)
	{
		i = -1;
		while (s[++i])
			func(i, s + i);
	}
}
/*
int	main(void)
{
	void (*func)(unsigned int, char*) = &tolower_;
	char str[] = "STRING";
	printf("%s\n", str);
	ft_striteri(str, func);
	printf("%s\n", str);
}*/
