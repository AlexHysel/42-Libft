/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin afomin@student.42kl.edu.my          #+#  +:+        #+#       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:17:51 by afomin            #+#    #+#             */
/*   Updated: 2025/10/24 15:50:28 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*array;
	size_t	i;

	if (num && size > (size_t)-1 / num)
		return (NULL);
	i = size * num;
	array = malloc(i);
	if (array)
		ft_memset(array, 0, i);
	return (array);
}
