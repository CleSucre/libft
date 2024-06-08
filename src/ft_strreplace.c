/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 02:58:00 by julthoma          #+#    #+#             */
/*   Updated: 2024/06/08 02:58:00 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	final_size(char *str, char *old, char *new)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == old[j])
		{
			j++;
			if (old[j] == '\0')
			{
				size += ft_strlen(new);
				i += j;
				break ;
			}
		}
		size++;
		i++;
	}
	return (size);
}

/**
 * @brief Replace all occurences of old in str by new
 *
 * @warning This function has not been tested yet !!!
 *
 * @param char *str
 * @param char *old
 * @param char *new
 * @return char *
 */
char	*ft_strreplace(char *str, char *old, char *new)
{
	char	*res;
	int		i;
	int		j;

	res = malloc(final_size(str, old, new) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (ft_strncmp(str + i, old, ft_strlen(old)) == 0)
		{
			j = 0;
			while (new[j])
			{
				res[i + j] = new[j];
				j++;
			}
			i += ft_strlen(old);
		}
		else
			res[i] = str[i];
		i++;
	}
	return (res);
}
