/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin afomin@student.42kl.edu.my          #+#  +:+        #+#       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:00:13 by afomin            #+#    #+#             */
/*   Updated: 2025/11/29 16:54:38 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*stash_extract_line(t_fd_list *node)
{
	char	*line;
	char	*ptr_stash;
	size_t	nl;

	if (!node->stash)
		return (NULL);
	nl = 0;
	while (node->stash[nl] && node->stash[nl] != '\n')
		nl++;
	line = ft_substr(node->stash, 0, ++nl);
	ptr_stash = node->stash;
	if (ptr_stash[nl])
		node->stash = ft_substr(ptr_stash, nl, ft_strlen(node->stash) - nl);
	else
		node->stash = NULL;
	free(ptr_stash);
	return (line);
}

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

char	*get_next_line_multi(int fd)
{
	static t_fd_list	*list;
	t_fd_list			*node;
	char				*buffer;
	ssize_t				was_read;

	node = add_node(&list, fd);
	buffer = ft_calloc(BUFFER_SIZE, 1);
	if (!buffer)
		return (NULL);
	was_read = 1;
	while (!ft_strchr(node->stash, '\n'))
	{
		was_read = read(fd, buffer, BUFFER_SIZE);
		if (was_read <= 0)
			break ;
		stash_expand(&node->stash, buffer, was_read);
	}
	free(buffer);
	if (was_read > 0)
		return (stash_extract_line(node));
	remove_node(node->fd, &list);
	return (NULL);
}
