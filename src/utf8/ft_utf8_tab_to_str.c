/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utf8.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <julthoma@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 00:02:11 by julthoma          #+#    #+#             */
/*   Updated: 2024/07/17 01:30:22 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_utf8_tablen(char **str)
{
	int	res;
	int	i;
	int	j;

	res = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
			j++;
		res += j;
		i++;
	}
	return (res);
}

char	*ft_utf8_tab_to_str(char **utf8tab)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	str = (char *)malloc(sizeof(char) * (ft_utf8_tablen(utf8tab) + 1));
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
