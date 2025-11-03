/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:46:37 by afomin            #+#    #+#             */
/*   Updated: 2025/10/23 19:39:46 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_bzero(void *block, size_t length)
{
	unsigned char		*ptr;

	ptr = (unsigned char *) block;
	while (length--)
		*ptr++ = 0;
	return (block);
}
