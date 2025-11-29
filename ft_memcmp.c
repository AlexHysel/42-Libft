/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin afomin@student.42kl.edu.my          #+#  +:+        #+#       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:14:40 by afomin            #+#    #+#             */
/*   Updated: 2025/10/24 17:17:16 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *str1, const void *str2, size_t bound)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	size_t				i;

	i = 0;
	s1 = (const unsigned char *) str1;
	s2 = (const unsigned char *) str2;
	if (bound < 1)
		return (0);
	while (s1[i] == s2[i] && i < bound - 1)
		i++;
	return (s1[i] - s2[i]);
}
