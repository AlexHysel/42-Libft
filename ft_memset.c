/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin afomin@student.42kl.edu.my          #+#  +:+        #+#       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:36:18 by afomin            #+#    #+#             */
/*   Updated: 2025/10/23 19:49:04 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *block, int value, size_t length)
{
	unsigned char		*bl;

	if (!length)
		return (block);
	bl = (unsigned char *) block;
	while (--length > 0)
		*(bl + length) = value;
	*bl = (unsigned char) value;
	return (block);
}
