/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:09:17 by afomin            #+#    #+#             */
/*   Updated: 2025/10/28 17:36:10 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*func)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*new_node;

	if (!lst || !func || !del)
		return (NULL);
	result = NULL;
	while (lst)
	{
		new_node = ft_lstnew(func(lst->content));
		if (!new_node)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, new_node);
		lst = lst->next;
	}
	return (result);
}
