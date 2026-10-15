/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:15:29 by mjebali           #+#    #+#             */
/*   Updated: 2026/05/23 11:08:57 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locates the last occurrence of c
char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*last;
	unsigned char	c1;

	i = 0;
	last = NULL;
	c1 = (char)c;
	while (s[i])
	{
		if ((s[i]) == c1)
			last = (char *)&s[i];
		i++;
	}
	if (c1 == '\0')
		return ((char *)&s[i]);
	return (last);
}
