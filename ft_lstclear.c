/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:10:52 by afomin            #+#    #+#             */
/*   Updated: 2025/10/24 14:37:38 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_ptr;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		next_ptr = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = next_ptr;
	}
	*lst = NULL;
}
