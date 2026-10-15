/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:32:32 by mjebali           #+#    #+#             */
/*   Updated: 2026/05/23 11:07:22 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// compare byte S1 against byte S2, n bytes long
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return ((unsigned char)ptr1[i] - (unsigned char)ptr2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int main(void)
{
	char str1[] = "hello";
	char str2[] = "hello";
	char str3[] = "hella";
	printf("%d\n", ft_memcmp(str1, str2, 5));
	printf("%d\n", ft_memcmp(str1, str3, 5));
	return(0);
}*/
