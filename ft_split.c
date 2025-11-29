/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin afomin@student.42kl.edu.my          #+#  +:+        #+#       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:05:28 by afomin            #+#    #+#             */
/*   Updated: 2025/10/24 19:12:15 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	char	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	element;
	char	**pointers;

	pointers = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (pointers == NULL)
		return (NULL);
	i = 0;
	start = 0;
	element = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
			pointers[element++] = ft_substr(s, start, i - start);
	}
	pointers[element] = NULL;
	return (pointers);
}
/*
int	main(void)
{
	int		i;
	char	**result;

	i = -1;
	result = ft_split("w", ',');
	while (result[++i])
		printf("[%d]%s\n", i, result[i]);
}*/
