/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 12:43:47 by mjebali           #+#    #+#             */
/*   Updated: 2026/05/23 11:05:39 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// convert int to str
static int	countsize(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n *= -1;
	}
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len_str;
	long int	num;

	num = n;
	len_str = countsize(num);
	str = malloc(sizeof(char) * (len_str + 1));
	if (!str)
		return (NULL);
	str[len_str] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		str[len_str - 1] = (num % 10) + '0';
		num /= 10;
		len_str--;
	}
	return (str);
}
