/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 19:52:18 by mjebali           #+#    #+#             */
/*   Updated: 2026/05/23 11:08:20 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// save a copy of a string
// returns a pointer to a new string which is a duplicate of s
char	*ft_strdup(const char *s)
{
	char	*copy;
	int		i;
	int		len;

	len = 0;
	while (s[len])
		len++;
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
int	main(void)
{
	char *s = "hello";
	char *copy = ft_strdup(s);
	printf("Original: %s\n", s);
	printf("Duplicate: %s\n", copy);
	return (0);
} */
