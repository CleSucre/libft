/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsameedge.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:06:24 by julthoma          #+#    #+#             */
/*   Updated: 2024/06/27 11:06:26 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a string starts and ends with the same specified characters.
 *
 * @param const char *str The input string.
 * @param const char *edge The edge character to check.
 * @return int Returns 1 if the string starts and
 * 			ends with the same edge character, 0 otherwise
 */
int	ft_strsameedge(const char *str, const char *edge)
{
	const char	*start;
	const char	*end;

	start = str;
	end = str + ft_strlen(str) - 1;
	if (str == NULL || *str == '\0')
		return (0);
	while (*start && ft_isspace((unsigned char)*start))
		start++;
	while (end > start && ft_isspace((unsigned char)*end))
		end--;
	return (ft_strncmp(start, edge, 1) == 0 && ft_strncmp(end, edge, 1) == 0);
}
