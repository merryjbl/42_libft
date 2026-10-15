/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 14:46:01 by mjebali           #+#    #+#             */
/*   Updated: 2026/05/23 15:57:57 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// split a string into an array of words using the character ‘c’ as a delimiter
// if allocation failed: free the string and then the array
static void	*ft_free_everything(char **strs, int count)
{
	while (count >= 0)
	{
		free(strs[count]);
		count--;
	}
	free(strs);
	return (NULL);
}
// step 1: count words

static int	ft_countword(const char *s, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	if (!*s)
		return (0);
	if (s[0] != c)
		words++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			words++;
		i++;
	}
	return (words);
}

// lengh of each word

static size_t	ft_lenword(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

// step 3: allocate array

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	word_len;
	int		j;

	if (!s)
		return (NULL);
	array = malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (!array)
		return (NULL);
	j = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			word_len = ft_lenword(s, c);
			array[j++] = ft_substr(s, 0, word_len);
			if (!array[j - 1])
				return (ft_free_everything(array, j - 1));
			s = s + word_len;
		}
	}
	array[j] = NULL;
	return (array);
}

/*
#include <stdio.h>
int main(void)
{
	char string[] = "xxxxxxxxhola!";
	char **strings = ft_split(string, 'x');

	int i = 0;
	while (strings[i])
	{
		printf("%s, ", strings[i]);
		i++;
	}
	i = 0;
while (strings[i])
	{
		free(strings[i]);
		i++;
	}
	free(strings);


}
*/
