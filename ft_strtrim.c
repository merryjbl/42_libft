/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 10:09:25 by mjebali           #+#    #+#             */
/*   Updated: 2026/05/23 11:09:00 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns a copy of s1,
//without the characters specified in set at the beginning and the end of s1.
char	*ft_strtrim(char const *s1, char const *set)
{
	int			start;
	int			end;
	char		*trimmed;

	if (!s1 || !set)
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trimmed = malloc(sizeof(char) * (end - start + 1));
	if (trimmed == NULL)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, end - start + 1);
	trimmed[end - start + 1] = '\0';
	return (trimmed);
}
