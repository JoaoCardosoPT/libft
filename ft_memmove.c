/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacarva <joacarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 02:48:03 by joacarva          #+#    #+#             */
/*   Updated: 2026/11/07 02:48:03 by joacarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Memory overlap occurs when two regions share memory addresses.
** Unlike memcpy, memmove handles overlapping regions.
*/

static void	copy_forward(unsigned char *dst, const unsigned char *src,
		int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
}

void	*ft_memmove(void *dst, const void *src, int len)
{
	unsigned char		*temp_dst;
	const unsigned char	*temp_src;

	if (dst == NULL && src == NULL)
		return (dst);
	temp_dst = (unsigned char *)dst;
	temp_src = (const unsigned char *)src;
	if (temp_dst > temp_src)
	{
		while (len > 0)
		{
			len--;
			temp_dst[len] = temp_src[len];
		}
	}
	else
		copy_forward(temp_dst, temp_src, len);
	return (dst);
}
