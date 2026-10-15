/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 16:29:05 by mjebali           #+#    #+#             */
/*   Updated: 2026/05/23 11:09:02 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// extract a substring from a string
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			i;
	unsigned int	len_s;

	i = 0;
	len_s = ft_strlen(s);
	if (!s)
		return (NULL);
	if ((start >= len_s) || len == 0)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (s[i + start] && i < len)
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
int main(void)
{
	char const s[] = "hola compi! que tal?";
	printf("new string is: %s\n", ft_substr(s, 0, 3));
	return (0);
} */
