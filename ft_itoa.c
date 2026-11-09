/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacarva <joacarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 02:48:03 by joacarva          #+#    #+#             */
/*   Updated: 2026/11/07 02:48:03 by joacarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_length(int number)
{
	int	length;

	length = (number <= 0);
	while (number != 0)
	{
		number /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*result;
	unsigned int	num;

	len = int_length(n);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	num = n;
	if (n < 0)
		num = 0 - num;
	while (len > 0)
	{
		result[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = ft_itoa(-42);
	if (!str)
		return (1);
	printf("%s\n", str);
	free(str);
	return (0);
}
*/
