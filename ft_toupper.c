/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:58:50 by mjebali           #+#    #+#             */
/*   Updated: 2026/05/23 11:09:19 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//lowercase letter returns its uppercase equivalent
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/*
int	main (void)
{
	int	c1 = 'm';
	int c2 = 'M';

	printf("%d\n", ft_toupper(c1));
	printf("%d\n", ft_toupper(c2));
	return (0);
}
 */
