/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <julthoma@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 02:37:06 by julthoma          #+#    #+#             */
/*   Updated: 2024/07/19 04:10:20 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_tabinsert(char **tab, char *str, size_t pos)
{
	char	**new;
	size_t	i;
	size_t	j;

	new = (char **)malloc(sizeof(char *) * (ft_tablen((const char **)tab) + 2));
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (tab[i])
	{
		if (i == pos)
		{
			new[j] = ft_strdup(str);
			j++;
		}
		new[j] = ft_strdup(tab[i]);
		i++;
		j++;
	}
	if (i == pos)
		new[j++] = ft_strdup(str);
	new[j] = NULL;
	ft_tabfree(tab);
	return (new);
}
