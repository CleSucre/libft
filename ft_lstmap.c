/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:54:00 by jthomas           #+#    #+#             */
/*   Updated: 2022/12/03 01:36:12 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;

	if (!lst)
		return (NULL);
	res = ft_lstnew(f(lst->content));
	if (res == NULL)
	{
		ft_lstclear(&res, del);
		return (NULL);
	}
	res->next = ft_lstmap(lst->next, f, del);
	return (res);
}
