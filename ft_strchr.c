/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:19:44 by afomin            #+#    #+#             */
/*   Updated: 2025/10/24 18:52:59 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strchr(const char *str, int symbol)
{
	while (*str)
	{
		if (*str == (char) symbol)
			return ((char *)str);
		str++;
	}
	if (symbol == '\0')
		return ((char *)str);
	return (NULL);
}
/*
int	main(void)
{
	printf("%d\n", *ft_strchr("Ejyafyallajokull", 'a'));
	printf("%d", *ft_strchr("Ejyafyallajokull", 'D'));
}
*/
