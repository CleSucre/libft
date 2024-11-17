/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy_passing_char.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierrot <mpierrot@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 01:00:00 by mpierrot          #+#    #+#             */
/*   Updated: 2024/09/18 10:45:34 by mpierrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief copy str in dst passing nb char
 * @param str string to cpy
 * @param dst result
 * @param nb number of char to pass
 * @return
 */
char	*strcpy_passing_char(char *str, int nb)
{
	int		i;
	char	*dst;

	dst = ft_calloc(sizeof(char *) * ft_strlen(str) - nb, 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (str[nb])
	{
		dst[i] = str[nb];
		i++;
		nb++;
	}
	return (dst);
}
