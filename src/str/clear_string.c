/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <mpierrot@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 01:00:00 by mpierrot          #+#    #+#             */
/*   Updated: 2024/09/18 10:36:32 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Clear a string by filling it with '\0'
 * @param str
 */

void	clear_string(char *str)
{
	int	len;
	int	i;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		str[i] = '\0';
		i++;
	}
}
