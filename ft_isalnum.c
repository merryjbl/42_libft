/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:51:19 by mjebali           #+#    #+#             */
/*   Updated: 2026/05/23 11:04:28 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//isalpha(c)  ||  isdigit(c)
int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
		|| (c <= '9' && c >= '0'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c1;
	int	c2;
	int	c3;

	c1 = 'L';
	c2 = '5';
	c3 = ' ';
	printf("%d\n", ft_isalnum(c1));
	printf("%d\n", ft_isalnum(c2));
	printf("%d\n", ft_isalnum(c3));
	return (0);
} */
