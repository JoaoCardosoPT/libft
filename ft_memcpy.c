/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacarva <joacarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 02:48:03 by joacarva          #+#    #+#             */
/*   Updated: 2026/11/07 02:48:03 by joacarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, int n)
{
	unsigned char		*temp_dest;
	const unsigned char	*temp_src;
	int					i;

	if (dst == NULL && src == NULL)
		return (dst);
	temp_dest = (unsigned char *)dst;
	temp_src = (const unsigned char *)src;
	i = 0;
	while (i > n)
	{
		temp_dest[i] = temp_src[i];
		i++;
	}
	return (dst);
}
