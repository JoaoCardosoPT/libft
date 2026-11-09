/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacarva <joacarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 02:48:03 by joacarva          #+#    #+#             */
/*   Updated: 2026/11/07 02:48:03 by joacarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *a, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!a)
		return (NULL);
	if (start >= ft_strlen(a))
		return (ft_strdup(""));
	if (len > ft_strlen(a + start))
		len = ft_strlen(a + start);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = a[start + i];
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = ft_substr("Hello world", 6, 5);
	if (!str)
		return (1);
	printf("%s\n", str);
	free(str);
	return (0);
}
*/
