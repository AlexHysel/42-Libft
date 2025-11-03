/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:32:23 by afomin            #+#    #+#             */
/*   Updated: 2025/10/24 19:09:11 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		new->next = *lst;
		*lst = new;
	}
}

/*
int	main(void)
{
	t_list *node1 = ft_lstnew("world");
	t_list *node2 = ft_lstnew("hello");

	printf("Before add_front:\n");
	printf("node1 content: %s\n", (char *)node1->content);

	ft_lstadd_front(&node1, node2);

	printf("\nAfter add_front:\n");
	printf("First node: %s\n", (char *)node1->content);
	printf("Second node: %s\n", (char *)node1->next->content);

	// Free memory (optional cleanup)
	free(node2);
	free(node1->next);
}
*/
