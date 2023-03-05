/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:54:00 by jthomas           #+#    #+#             */
/*   Updated: 2022/12/07 17:09:43 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
 * Iterates the list ’lst’ and applies the function ’f’ to the content of each
 * element. Creates a new list resulting of the successive applications of the
 * function ’f’. The ’del’ function is used to delete the content of an element
 * if needed.
 */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*t;

	if (!lst)
		return (NULL);
	t = f(lst->content);
	res = ft_lstnew(t);
	if (res == NULL)
	{
		free(t);
		ft_lstclear(&res, del);
		return (NULL);
	}
	res->next = ft_lstmap(lst->next, f, del);
	return (res);
}
