/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin afomin@student.42kl.edu.my          #+#  +:+        #+#       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:11:39 by afomin            #+#    #+#             */
/*   Updated: 2025/10/24 18:00:52 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*func)(unsigned int, char))
{
	char	*result;
	size_t	size;

	if (!s || !func)
		return (NULL);
	size = ft_strlen(s);
	result = malloc(size + 1);
	if (!result)
		return (NULL);
	result[size] = '\0';
	if (size > 0)
	{
		size--;
		while (1)
		{
			result[size] = func(size, s[size]);
			if (size == 0)
				break ;
			size--;
		}
	}
	return (result);
}
