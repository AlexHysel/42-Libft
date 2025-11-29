/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin afomin@student.42kl.edu.my          #+#  +:+        #+#       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:57:07 by afomin            #+#    #+#             */
/*   Updated: 2025/10/24 18:42:34 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *str1, const char *str2, size_t bound)
{
	size_t	i;

	if (bound == 0)
		return (0);
	i = 0;
	while (str1[i] == str2[i] && i < bound - 1 && str1[i])
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
