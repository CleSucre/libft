/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:05:52 by julthoma          #+#    #+#             */
/*   Updated: 2023/11/02 17:05:54 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **tab, int i)
{
	while (i >= 0)
		free(tab[i--]);
	free(tab);
}

static int	ft_exec(char **dst, int size, char const *s, char c)
{
	int	i;
	int	ii;
	int	start;

	i = 0;
	ii = 0;
	while (size > 0)
	{
		size--;
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		dst[ii] = ft_substr(s, start, i - start);
		if (!dst[ii])
		{
			ft_free(dst, ii);
			return (1);
		}
		ii++;
	}
	dst[ii] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (size + 1));
	if (!res)
		return (NULL);
	if (ft_exec(res, size, s, c))
		return (NULL);
	return (res);
}
