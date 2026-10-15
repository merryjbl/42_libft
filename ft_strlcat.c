/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 12:00:25 by mjebali           #+#    #+#             */
/*   Updated: 2026/05/23 13:28:30 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// glues src to the end of dest
// the result ends with \0
// string concatenation
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	result;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size < dst_len)
		result = size + src_len;
	else
		result = dst_len + src_len;
	i = 0;
	if (size == i)
		return (size + src_len);
	while (src[i] != '\0' && ((dst_len + i) < size - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (result);
}

/* int	main(void)
{
	char dest[] = "hello";
	const char src[] = " world";
	ft_strlcat(dest, src, 15);
	printf(("%s\n"), result);
	return (0):
} */
