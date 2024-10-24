/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:12:56 by julthoma          #+#    #+#             */
/*   Updated: 2023/11/02 17:12:58 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_lst)
{
	t_list	*t;

	if (!lst || !new_lst)
		return ;
	if (*lst)
	{
		t = ft_lstlast(*lst);
		t->next = new_lst;
	}
	else
		*lst = new_lst;
}
