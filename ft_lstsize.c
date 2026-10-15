/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 20:03:58 by mjebali           #+#    #+#             */
/*   Updated: 2026/05/23 11:07:08 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// counts the number of nodes in a list
int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		i;

	temp = lst;
	i = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	t_list	*lst;
	t_list	*second;
	t_list	*third;

	lst = malloc(sizeof(t_list));
	second = malloc(sizeof(t_list));
	third = malloc(sizeof(t_list));

	lst->content = (char *)"1";
	lst->next = second;

	second->content = (char *)"2";
	second->next = third;

	third->content = (char *)"3";
	third->next = NULL;
	printf("the size is: %d\n", ft_lstsize(lst));
	return (0);
} */
