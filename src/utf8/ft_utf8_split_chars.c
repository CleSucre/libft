/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utf8.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <julthoma@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 00:02:11 by julthoma          #+#    #+#             */
/*   Updated: 2024/07/17 03:02:53 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	add_char(char **res, char **str, int *i, int size)
{
	int	j;

	res[*i] = ft_calloc(size + 1, sizeof(char));
	if (res[*i] == NULL)
	{
		ft_tabfree(res);
		return (0);
	}
	j = 0;
	while (j < size)
	{
		res[*i][j] = *(*str);
		(*str)++;
		j++;
	}
	(*i)++;
	return (size);
}

char	**ft_utf8_split_chars(char *str)
{
	char			**res;
	unsigned char	*p;
	int				i;

	res = ft_calloc(ft_strlen(str) + 1, sizeof(char *));
	if (res == NULL)
		return (NULL);
	i = 0;
	p = (unsigned char *)str;
	while (*p)
	{
		if (ft_utf8_isascii(*p))
			p += add_char(res, &str, &i, 1);
		else if (ft_utf8_istwobyte(*p))
			p += add_char(res, &str, &i, 2);
		else if (ft_utf8_isthreebyte(*p))
			p += add_char(res, &str, &i, 3);
		else if (ft_utf8_isfourbyte(*p))
			p += add_char(res, &str, &i, 4);
		else
			p += add_char(res, &str, &i, 1);
	}
	return (res);
}
