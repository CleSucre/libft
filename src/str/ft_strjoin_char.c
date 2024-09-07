/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:39:00 by julthoma          #+#    #+#             */
/*   Updated: 2024/09/07 15:39:00 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Join a string with a char
 *
 * @param char *s1
 * @param char c
 * @return
 */
char	*ft_strjoin_char(char *s1, char c)
{
	char	*res;
	int		i;

	if (!s1)
	{
		res = ft_calloc(2, sizeof(char));
		res[0] = c;
		return (res);
	}
	res = ft_calloc(ft_strlen(s1) + 2, sizeof(char));
	i = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = c;
	free(s1);
	return (res);
}
