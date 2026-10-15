/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:23:57 by mjebali           #+#    #+#             */
/*   Updated: 2026/05/23 11:05:10 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//checks whether c that fits into the ASCII char.
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;

	c = '@';
	printf("%d\n", ft_isascii(c));
	return (0);
} */
