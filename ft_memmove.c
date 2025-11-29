/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin afomin@student.42kl.edu.my          #+#  +:+        #+#       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:24:55 by afomin            #+#    #+#             */
/*   Updated: 2025/10/23 19:42:13 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (dest == src || len == 0)
		return (dest);
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (d > s || d + len < s)
		while (len--)
			d[len] = s[len];
	else
	{
		i = -1;
		while (++i < len)
			d[i] = s[i];
	}
	return (dest);
}
