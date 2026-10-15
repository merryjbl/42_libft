/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:15:08 by mjebali           #+#    #+#             */
/*   Updated: 2026/05/23 11:04:54 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//checks for an alphabetic character
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c1;
	int	c2;

	c1 = '0';
	c2 = 'M';
	printf("%d\n", ft_isalpha(c1));
	printf("%d\n", ft_isalpha(c2));
	return (0);
}*/
