/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin <alexhysel@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:28:13 by afomin            #+#    #+#             */
/*   Updated: 2025/11/15 14:28:58 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2048
# endif

# include <fcntl.h>
# include <sys/types.h>
# include "../libft.h"

char		*get_next_line(int fd);
char		*get_next_line_multi(int fd);

typedef struct s_fd_list_node
{
	int						fd;
	char					*stash;
	struct s_fd_list_node	*next;
}	t_fd_list;

void		remove_node(int fd, t_fd_list **list);
t_fd_list	*add_node(t_fd_list **list, int fd);

#endif
