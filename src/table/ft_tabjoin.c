/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:06:24 by julthoma          #+#    #+#             */
/*   Updated: 2024/07/19 04:11:30 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_tabs(char **tab1, char **tab2)
{
	ft_tabfree(tab1);
	ft_tabfree(tab2);
}

char	**ft_tabjoin(char **tab1, char **tab2)
{
	char	**new_tab;
	int		i;
	int		j;

	if (!tab1 || !tab2)
		return (NULL);
	new_tab = (char **)malloc(sizeof(char *)
			* (ft_tablen((const char **)tab1)
				+ ft_tablen((const char **)tab2) + 1));
	if (!new_tab)
		return (NULL);
	i = 0;
	while (tab1[i])
	{
		new_tab[i] = ft_strdup(tab1[i]);
		if (!new_tab[i])
		{
			ft_tabfree(new_tab);
			free_tabs(tab1, tab2);
			return (NULL);
		}
		i++;
	}
	j = 0;
	while (tab2[j])
	{
		new_tab[i] = ft_strdup(tab2[j]);
		if (!new_tab[i])
		{
			ft_tabfree(new_tab);
			free_tabs(tab1, tab2);
			return (NULL);
		}
		i++;
		j++;
	}
	new_tab[i] = NULL;
	free_tabs(tab1, tab2);
	return (new_tab);
}
