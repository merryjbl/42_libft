/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:53:01 by mjebali           #+#    #+#             */
/*   Updated: 2026/05/23 11:07:41 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copies n bytes from src to dst. handle overlaping
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	if ((!dest && !src) || n == 0)
		return (dest);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[20] = "HelloWorld";

	printf("Before: %s\n", str);
	// overlapping memory test
	ft_memmove(str + 5, str, 0);
	printf("After : %s\n", str);
	//test2
	//ft_memmove(str, str + 2, 5);
	//printf("After : %s\n", str);
	return (0);
}*/
