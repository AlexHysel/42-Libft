/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin afomin@student.42kl.edu.my          #+#  +:+        #+#       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:33:45 by afomin            #+#    #+#             */
/*   Updated: 2025/10/24 19:34:22 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t bound)
{
	size_t	i;
	size_t	j;
	size_t	substr_len;

	if (*substr == '\0')
		return ((char *)str);
	substr_len = ft_strlen(substr);
	i = 0;
	while (str[i] && i < bound)
	{
		j = 0;
		while (i + j < bound && str[i + j]
			&& str[i + j] == substr[j])
			j++;
		if (j == substr_len)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
