/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin afomin@student.42kl.edu.my          #+#  +:+        #+#       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:46:37 by afomin            #+#    #+#             */
/*   Updated: 2025/11/29 17:40:19 by afomin           ###   ########.fr       */
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
