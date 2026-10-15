/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 13:59:54 by mjebali           #+#    #+#             */
/*   Updated: 2026/05/23 11:07:00 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Create a linked list node, Put my data inside it
//Set next to nothing, return node
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}
/*
int	main(void)
{
	//create node with int content
	int content1 = 42;
	t_list *node1 = ft_lstnew(&content1);

	//create node with string content
	char str[] = "hello";
	t_list *node2 = ft_lstnew(str);

	printf("Test1: %p->%d\n", (void *)node1, *(int *)node1->content);
	printf("Test2: %p->%s\n", (void *)node2, (char *)node2->content);

	free(node1);
	free(node2);
	return (0);
} */
