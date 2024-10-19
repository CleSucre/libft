/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel_empty.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <julthoma@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 09:24:00 by julthoma          #+#    #+#             */
/*   Updated: 2024/10/19 09:24:00 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tabdel_empty(char **table)
{
	int	i;

	i = 0;
	while (table[i])
	{
		if (!ft_strlen(table[i]))
		{
			ft_tabdel(table, i);
			i--;
		}
		i++;
	}
}
