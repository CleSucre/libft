/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:06:24 by julthoma          #+#    #+#             */
/*   Updated: 2023/11/02 17:06:26 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_list(char const **strs, const char *sep)
{
	int		i;
	char	*res;
	char	*tmp;

	if (!strs)
		return (NULL);
	res = NULL;
	i = 0;
	while (strs[i])
	{
		tmp = res;
		res = ft_strjoin(res, strs[i]);
		free(tmp);
		if (strs[i + 1])
		{
			tmp = res;
			res = ft_strjoin(res, sep);
			free(tmp);
		}
		i++;
	}
	return (res);
}
