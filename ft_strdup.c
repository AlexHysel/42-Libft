/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:39:53 by afomin            #+#    #+#             */
/*   Updated: 2025/10/24 17:54:19 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t		i;
	char		*duplicate;

	duplicate = (char *) malloc(ft_strlen(str) + 1);
	if (duplicate != NULL)
	{
		i = -1;
		while (str[++i])
			duplicate[i] = str[i];
		duplicate[i] = '\0';
	}
	return (duplicate);
}
