/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_table_args.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <mpierrot@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 01:00:00 by mpierrot          #+#    #+#             */
/*   Updated: 2024/09/18 10:27:26 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief find a specific lines in tab about searched param
 * 			Example : in an env tab, find specific string about PATH
 * @param table
 * @param search
 * @return i if success, -1 if failed
 */
int	find_table_args(char **table, char *search)
{
	int	i;

	i = 0;
	while (table[i])
	{
		if (ft_strncmp(table[i], search, ft_strlen(search)) == 0)
			return (i);
		i++;
	}
	return (-1);
}
