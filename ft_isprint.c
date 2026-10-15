/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 10:14:10 by mjebali           #+#    #+#             */
/*   Updated: 2026/05/23 11:05:30 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//checks for any printable character including space
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c1;
	int	c2;

	c1 = 'l';
	c2 = '\n';
	printf("%d\n", ft_isprint(c1));
	printf("%d\n", ft_isprint(c2));
	return (0);
} */
