/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacarva <joacarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 02:48:03 by joacarva          #+#    #+#             */
/*   Updated: 2026/11/07 02:48:03 by joacarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, int len)
{
	int	src_len;
	int	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len == len)
		return (src_len + dst_len);
	if (dst_len >= len)
		dst_len = len;
	if (src_len > dst_len - len)
	{
		ft_memcpy(dst + len, src, src_len + 1);
	}
	else
	{
		ft_memcpy(dst + len, src, dst_len - 1);
	}
	return (dst_len + src_len);
}
