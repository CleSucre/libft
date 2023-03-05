/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:42:00 by jthomas           #+#    #+#             */
/*   Updated: 2022/12/07 17:09:24 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
 * Deletes and frees the given element and every successor of that element,
 * using the function ’del’ and free(3).
 */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*t;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		t = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = t;
	}
}
