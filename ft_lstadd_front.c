/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 18:35:03 by mjebali           #+#    #+#             */
/*   Updated: 2026/05/23 11:05:51 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

// Adds a new element at the front of the list
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list *lst = malloc(sizeof(t_list));
	lst->content = (char *)"hello";
	lst->next = NULL;

	t_list *new = malloc(sizeof(t_list));
	new->content = (char *)"world";
	new->next = NULL;
	ft_lstadd_front(&lst, new);
	printf("%s\n", (char *)curr->content);
	return (0);
}
 */
