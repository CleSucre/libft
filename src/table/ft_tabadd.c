/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 03:18:00 by julthoma          #+#    #+#             */
/*   Updated: 2024/10/16 03:18:00 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Insert a string in a tab at the last index.
 * 			If the tab is NULL, it is created.
 *
 * @param tab
 * @param str
 * @param index
 * @return char**
 */
void	ft_tabadd(char ***table, char *str)
{
	int		i;
	char	**new_tab;

	i = 0;
	if (*table == NULL)
	{
		*table = (char **)ft_calloc(2, sizeof(char *));
		(*table)[0] = ft_strdup(str);
	}
	else
	{
		while ((*table)[i])
			i++;
		new_tab = (char **)malloc(sizeof(char *) * (i + 2));
		i = 0;
		while ((*table)[i])
		{
			new_tab[i] = ft_strdup((*table)[i]);
			i++;
		}
		new_tab[i] = ft_strdup(str);
		new_tab[i + 1] = NULL;
		ft_tabfree(*table);
		*table = new_tab;
	}
}
