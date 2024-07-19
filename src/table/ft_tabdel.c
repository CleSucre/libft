/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <julthoma@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 00:30:36 by julthoma          #+#    #+#             */
/*   Updated: 2024/07/19 04:10:46 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Remove a string from a tab at a specific position
 *
 * @param char	**tab
 * @param int	pos
 * @return int 1 if success, 0 if fail
 */
int	ft_tabdel(char **tab, unsigned int pos)
{
	unsigned int	i;
	unsigned int	length;

	length = (unsigned int)ft_tablen((const char **)tab);
	if (pos >= length)
		return (0);
	free(tab[pos]);
	i = pos;
	while (i < length - 1)
	{
		tab[i] = tab[i + 1];
		i++;
	}
	tab[length - 1] = NULL;
	return (1);
}
