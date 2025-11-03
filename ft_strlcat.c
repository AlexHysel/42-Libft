/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:37:14 by afomin            #+#    #+#             */
/*   Updated: 2025/10/23 19:31:20 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(char *str);

int	ft_strlcat(char *dist, char *src, size_t len)
{
	size_t	dist_len;
	size_t	i;

	dist_len = ft_strlen(dist);
	if (dist_len >= len)
		return (ft_strlen(src) + len);
	i = -1;
	while (dist_len + ++i < len - 1 && src[i])
		dist[i + dist_len] = src[i];
	dist[i + dist_len] = '\0';
	return (dist_len + ft_strlen(src));
}
