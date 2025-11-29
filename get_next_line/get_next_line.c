/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin afomin@student.42kl.edu.my          #+#  +:+        #+#       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:05:34 by afomin            #+#    #+#             */
/*   Updated: 2025/11/29 18:06:44 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	stash_expand(char **stash, char *buffer, ssize_t len)
{
	char	*expanded;
	size_t	full_len;

	full_len = ft_strlen(*stash) + len;
	expanded = malloc(full_len + 1);
	if (expanded)
	{
		expanded[full_len] = '\0';
		while (len)
			expanded[--full_len] = buffer[--len];
		while (full_len--)
			expanded[full_len] = (*stash)[full_len];
	}
	free(*stash);
	*stash = expanded;
}

static char	*stash_extract_line(char **stash)
{
	char	*line;
	char	*ptr_stash;
	size_t	nl;

	nl = 0;
	while ((*stash)[nl] && (*stash)[nl] != '\n')
		nl++;
	line = ft_substr(*stash, 0, ++nl);
	ptr_stash = *stash;
	if (ptr_stash[nl])
		*stash = ft_substr(*stash, nl, ft_strlen(*stash) - nl);
	else
		*stash = NULL;
	free(ptr_stash);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*buffer;
	ssize_t		was_read;

	buffer = ft_calloc(BUFFER_SIZE, 1);
	if (!buffer)
		return (NULL);
	was_read = 1;
	if (!ft_strchr(stash, '\n'))
	{
		while (!ft_strchr(buffer, '\n'))
		{
			was_read = read(fd, buffer, BUFFER_SIZE);
			if (was_read <= 0)
				break ;
			stash_expand(&stash, buffer, was_read);
		}
	}
	free(buffer);
	if (was_read > 0)
		return (stash_extract_line(&stash));
	if (stash)
		free(stash);
	return (NULL);
}
