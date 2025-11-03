/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:25:44 by afomin            #+#    #+#             */
/*   Updated: 2025/10/24 17:24:01 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int symbol)
{
	int		i;
	char	*result;

	i = -1;
	result = NULL;
	while (str[++i])
		if (str[i] == (char) symbol)
			result = (char *)str + i;
	if (symbol == '\0')
		return ((char *)str + i);
	return (result);
}
