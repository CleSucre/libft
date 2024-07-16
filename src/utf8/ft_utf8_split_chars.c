/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utf8.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <julthoma@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 00:02:11 by julthoma          #+#    #+#             */
/*   Updated: 2024/07/17 01:22:28 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int add_char(char **res, char **str, int *i, int size)
{
	int	j;

	res[*i] = ft_calloc(size + 1, sizeof(char));
	if (res[*i] == NULL)
	{
		ft_freetab(res);
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

char **ft_utf8_split_chars(char *str)
{
	char			**res;
	unsigned char	*p;
	int 			i;

	res = ft_calloc(ft_strlen(str) + 1, sizeof(char *));
	if (res == NULL)
		return (NULL);
	i = 0;
	p = (unsigned char *)str;
	while (*p)
	{
		if (ft_utf8_isascii(*p))
		{
			// ASCII
			p += add_char(res, &str, &i, 1);
		}
		else if (ft_utf8_istwobyte(*p))
		{
			// 2-byte UTF-8
			p += add_char(res, &str, &i, 2);
		}
		else if (ft_utf8_isthreebyte(*p))
		{
			// 3-byte UTF-8
			p += add_char(res, &str, &i, 3);
		}
		else if (ft_utf8_isfourbyte(*p))
		{
			// 4-byte UTF-8
			p += add_char(res, &str, &i, 4);
		}
		else
		{
			// Invalid UTF-8, just print the byte
			printf("Invalid byte: %d\n", *p);
			add_char(res, &str, &i, 1);
			p++;
		}
	}
	return (res);
}
