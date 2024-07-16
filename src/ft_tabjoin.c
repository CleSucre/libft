/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:06:24 by julthoma          #+#    #+#             */
/*   Updated: 2024/07/17 01:09:56 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_tabs(char **tab1, char **tab2)
{
	ft_freetab(tab1);
	ft_freetab(tab2);
}

char	**ft_tabjoin(const char **tab1, const char **tab2)
{
	char	**tab;
	int		i;
	int		j;

	j = 0;
	if (!tab1 || !tab2)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_strlentab(tab1)
				+ ft_strlentab(tab2) + 1));
	if (!tab)
		return (NULL);
	i = -1;
	while (tab1[++i])
		tab[i] = ft_strdup(tab1[i]);
	while (tab2[j])
	{
		tab[i] = ft_strdup(tab2[j]);
		i++;
		j++;
	}
	tab[i] = NULL;
	free_tabs((char **)tab1, (char **)tab2);
	return (tab);
}
