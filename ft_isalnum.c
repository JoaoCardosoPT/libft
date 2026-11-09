/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacarva <joacarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 02:48:03 by joacarva          #+#    #+#             */
/*   Updated: 2026/11/07 02:48:03 by joacarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int d)
{
	if ((d >= 'A' && d <= 'Z') || (d >= 'a' && d <= 'z')
		|| (d >= '0' && d <= '9'))
		return (1);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d %d %d\n", ft_isalnum('A'), ft_isalnum('7'),
		ft_isalnum('!'));
	return (0);
}
*/
