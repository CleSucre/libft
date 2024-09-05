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

static char	**allocate_new_tab(char **tab1, char **tab2)
{
	char	**new_tab;
	int		total_size;

	total_size = ft_tablen((const char **)tab1)
		+ ft_tablen((const char **)tab2) + 1;
	new_tab = (char **)malloc(sizeof(char *) * total_size);
	return (new_tab);
}

static int	copy_tab_content(char **dest, char **src, int offset)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[offset + i] = ft_strdup(src[i]);
		if (!dest[offset + i])
			return (-1);
		i++;
	}
	return (i);
}

static char	**handle_error(char **new_tab, char **tab1, char **tab2)
{
	free_tabs(tab1, tab2);
	ft_tabfree(new_tab);
	return (NULL);
}

char	**ft_tabjoin(char **tab1, char **tab2)
{
	char	**new_tab;
	int		i;
	int		j;

	if (!tab1 || !tab2)
		return (NULL);
	new_tab = allocate_new_tab(tab1, tab2);
	if (!new_tab)
		return (NULL);
	i = copy_tab_content(new_tab, tab1, 0);
	if (i == -1)
		return (handle_error(new_tab, tab1, tab2));
	j = copy_tab_content(new_tab, tab2, i);
	if (j == -1)
		return (handle_error(new_tab, tab1, tab2));
	new_tab[i + j] = NULL;
	free_tabs(tab1, tab2);
	return (new_tab);
}
