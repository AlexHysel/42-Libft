/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin afomin@student.42kl.edu.my          #+#  +:+        #+#       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:33:01 by afomin            #+#    #+#             */
/*   Updated: 2025/10/22 11:56:35 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	s1_len;
	size_t	full_len;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	full_len = s1_len + ft_strlen(s2);
	result = malloc(full_len + 1);
	if (result)
	{
		i = -1;
		while (++i < s1_len)
			result[i] = s1[i];
		while (i < full_len)
		{
			result[i] = s2[i - s1_len];
			i++;
		}
		result[i] = '\0';
	}
	return (result);
}
