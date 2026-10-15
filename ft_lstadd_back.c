/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 11:56:19 by mjebali           #+#    #+#             */
/*   Updated: 2026/05/23 11:05:46 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//adds a new node at the end of the list
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
/*
int	main(void)
{
	t_list	*list;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	list == NULL;
	n1 = ft_lstnew(10);
	n2 = ft_lstnew(20);
	n3 = ft_lstnew(30);

	printf("%p->d\n", ft_lstadd_back(&lst, new));
	while (lst)
	{
		printf("%d -> ", lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
	return (0);
} */
