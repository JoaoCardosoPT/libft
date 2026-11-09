/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacarva <joacarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 02:48:03 by joacarva          #+#    #+#             */
/*   Updated: 2026/11/07 02:48:03 by joacarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
#include <stdio.h>

static void	test_delete(void *content)
{
	printf("Deleting: %s\n", (char *)content);
	free(content);
}

int	main(void)
{
	t_list	*list;
	char	*content;

	content = ft_strdup("Hello");
	if (!content)
		return (1);
	list = ft_lstnew(content);
	if (!list)
	{
		free(content);
		return (1);
	}
	ft_lstdelone(list, test_delete);
	return (0);
}
*/
