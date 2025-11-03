/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:07:36 by afomin            #+#    #+#             */
/*   Updated: 2025/10/24 18:14:06 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dist, const char *src, size_t len)
{
	size_t	i;

	if (len > 0)
	{
		i = -1;
		while (++i < len - 1 && src[i])
			dist[i] = src[i];
		dist[i] = '\0';
	}
	return (ft_strlen(src));
}
