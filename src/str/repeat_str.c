/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <mpierrot@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 01:00:00 by mpierrot          #+#    #+#             */
/*   Updated: 2024/09/10 22:45:27 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Print string key X times
 * @param key string to print
 * @param x how many times to print
 */
void	repeat_str(char *key, int x)
{
	int	i;

	if (x < 0 || !key)
		return ;
	i = 0;
	while (i < x)
	{
		ft_putstr_fd(key, 1);
		i++;
	}
}
