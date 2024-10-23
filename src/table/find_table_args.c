/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_table_args.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <mpierrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 01:00:00 by mpierrot          #+#    #+#             */
/*   Updated: 2024/10/23 05:03:08 by mpierrot         ###   ########.fr       */
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
	int		i;
	size_t	search_len;

	i = 0;
	if (!table || !search)
		return (-1);
	search_len = ft_strlen(search);
	while (table[i])
	{
		if (ft_strncmp(table[i], search, search_len) == 0)
		{
			if (table[i][search_len] == 0 || table[i][search_len] == '=')
				return (i);
		}
		i++;
	}
	return (-1);
}
