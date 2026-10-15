/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 16:12:11 by mjebali           #+#    #+#             */
/*   Updated: 2026/05/23 11:04:16 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// calloc allocates and sets the bytes in the allocated region to 0
// returns a pointer to the allocated memory
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size != 0 && nmemb > __SIZE_MAX__ / size)
		return (NULL);
	ptr = (void *)malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
/*
int	main(void)
{
	int	*array;
	int	i;

	array = (int *)ft_calloc(10, sizeof(int));
	if (!array)
		return (1);
	printf("normal allocation:\n");
	while (i = 0; i < 10; i++)
		printf("%d", array[i]);
	printf("\n");

	free(array);
	return (0);
} */
