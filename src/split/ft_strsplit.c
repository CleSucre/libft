/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 06:06:00 by julthoma          #+#    #+#             */
/*   Updated: 2024/07/05 06:06:00 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_tokens(const char *str, const char *separator)
{
	int	count;
	int	i;
	int	j;

	count = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (separator[j])
		{
			if (str[i] == separator[j])
			{
				count++;
				break ;
			}
			j++;
		}
		i++;
	}
	return (count);
}

static int	ft_strstr_pos(const char *str, const char *separator)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (separator[j] && str[i + j] == separator[j])
			j++;
		if (!separator[j])
			return (i);
		i++;
	}
	return (-1);
}

char	**ft_strsplit(const char *str, const char *separator)
{
	char	**tokens;
	int		count;
	int		i;
	int		pos;

	count = count_tokens(str, separator);
	tokens = (char **)malloc((count + 1) * sizeof(char *));
	if (!tokens)
		return (NULL);
	i = 0;
	while (i < count && *str)
	{
		pos = ft_strstr_pos(str, separator);
		if (pos == -1)
			pos = ft_strlen(str);
		tokens[i] = (char *)malloc(pos + 1);
		if (!tokens[i])
			return (NULL);
		ft_strncpy(tokens[i], str, pos);
		tokens[i][pos] = '\0';
		str += pos + ft_strlen(separator);
		i++;
	}
	tokens[i] = NULL;
	return (tokens);
}
