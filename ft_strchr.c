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

char	*ft_strchr(const char *str, int symbol)
{
	if (str)
	{
		while (*str)
		{
			if (*str == symbol)
				return ((char *)str);
			str++;
		}
		if (!symbol)
			return ((char *)str);
	}
	return (NULL);
}
