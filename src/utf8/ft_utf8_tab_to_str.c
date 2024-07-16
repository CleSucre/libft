/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utf8.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <julthoma@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 00:02:11 by julthoma          #+#    #+#             */
/*   Updated: 2024/07/17 00:55:45 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_utf8_tab_to_str(char **utf8tab)
{
	char *str;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (utf8tab[i])
	{
		j = 0;
		while (utf8tab[i][j])
			j++;
		k += j;
		i++;
	}
	str = (char *)malloc(sizeof(char) * (k + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (utf8tab[i])
	{
		k = 0;
		while (utf8tab[i][k])
		{
			str[j] = utf8tab[i][k];
			j++;
			k++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
