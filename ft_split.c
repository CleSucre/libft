/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 05:40:46 by jthomas           #+#    #+#             */
/*   Updated: 2022/11/11 05:43:26 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_extract(char const *str, int start, int end)
{
	char	*result;
	int		i;

	result = malloc(sizeof(char) * (end - start + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (str[start] && start < end)
	{
		result[i] = str[start++];
		i++;
	}
	result[i] = '\0';
	return (result);
}

int	ft_count_sep(char const *s, char sep)
{
	int	i;
	int	temp;
	int	size;

	size = 0;
	i = 0;
	temp = -1;
	while (s[i])
	{
		if (s[i] == sep)
		{
			if (i - temp != 1)
				size++;
			temp = i;
		}
		i++;
	}
	if (i != 0 && s[i - 1] != sep)
		size++;
	return (size);
}

void	ft_free_all(char **table)
{
	while (*table)
		free(*table++);
	free(table);
}

//TODO: fix protection check for second malloc
char	**ft_split(char const *s, char c)
{
	char	**res;
	int		temp;
	int		i;
	int		ii;

	res = malloc(sizeof(char *) * (ft_count_sep(s, c) + 1));
	if (!res)
		return (NULL);
	i = -1;
	ii = 0;
	temp = -1;
	while (s[++i])
	{
		if (s[i] == c)
		{
			if (i - temp != 1)
			{
				res[ii] = ft_extract(s, temp + 1, i);
				if (!res[ii++])
				{
					ft_free_all(res);
					return (NULL);
				}
			}
			temp = i;
		}
	}
	if (i != 0 && s[i - 1] != c)
		res[ii++] = ft_extract(s, temp + 1, i);
	res[ii] = NULL;
	return (res);
}
