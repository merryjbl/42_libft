/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 15:43:44 by mjebali           #+#    #+#             */
/*   Updated: 2026/05/23 11:08:17 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locate the first occurrence of a character c
char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	c1;

	c1 = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == c1)
			return ((char *)&s[i]);
		i++;
	}
	if (c1 == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s = "Bonjour";

	printf("my func-> %p\n", ft_strchr(s, 'b'));
	printf("my func-> %p\n", ft_strchr(s, 'L'));
	printf("my func-> %p\n", ft_strchr(s, 'j'));
} */
