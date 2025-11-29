/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin afomin@student.42kl.edu.my          #+#  +:+        #+#       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:11:42 by afomin            #+#    #+#             */
/*   Updated: 2025/10/24 11:30:53 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *) malloc(sizeof(t_list));
	if (node != NULL)
	{
		node->content = content;
		node->next = NULL;
	}
	return (node);
}
/*
int main(void)
{
    t_list *node1;
    t_list *node2;
    char *str = "Hello, libft!";
    int num = 42;

    // Test 1: Create a node with a string
    node1 = ft_lstnew(str);
    if (node1 == NULL)
        printf("Test 1 FAILED: ft_lstnew returned NULL\n");
    else
    {
        printf("Test 1 PASSED\n");
        printf("  Content: %s\n", (char *)node1->content);
        printf("  Next: %p\n", (void *)node1->next);
    }

    // Test 2: Create a node with an integer
    node2 = ft_lstnew(&num);
    if (node2 == NULL)
        printf("Test 2 FAILED: ft_lstnew returned NULL\n");
    else
    {
        printf("Test 2 PASSED\n");
        printf("  Content: %d\n", *(int *)node2->content);
        printf("  Next: %p\n", (void *)node2->next);
    }

    // Test 3: Node isolation check
    if (node1->next == NULL && node2->next == NULL)
        printf("Test 3 PASSED: both nodes have next == NULL\n");
    else
        printf("Test 3 FAILED: one of the nodes has next != NULL\n");

    // Free memory
    free(node1);
    free(node2);

    return 0;
}*/
