/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin afomin@student.42kl.edu.my          #+#  +:+        #+#       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:04:32 by afomin            #+#    #+#             */
/*   Updated: 2025/10/24 17:07:14 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *block, int symbol, size_t len)
{
	unsigned char		*b;
	size_t				i;

	b = (unsigned char *) block;
	i = 0;
	while (i < len)
	{
		if (b[i] == (unsigned char) symbol)
			return (b + i);
		i++;
	}
	return (NULL);
}
