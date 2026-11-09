/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacarva <joacarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 02:48:03 by joacarva          #+#    #+#             */
/*   Updated: 2026/11/07 02:48:03 by joacarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;

	if (size != 0 && count > (size_t)-1 / size)
		return (NULL);
	tmp = malloc(size * count);
	if (!tmp)
		return (NULL);
	ft_memset(tmp, 0, size * count);
	return (tmp);
}

/*
#include <stdio.h>

int	main(void)
{
	int	*numbers;

	numbers = ft_calloc(3, sizeof(int));
	if (!numbers)
		return (1);
	printf("%d %d %d\n", numbers[0], numbers[1], numbers[2]);
	free(numbers);
	return (0);
}
*/
