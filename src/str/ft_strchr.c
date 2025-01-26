/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:05:56 by julthoma          #+#    #+#             */
/*   Updated: 2023/11/02 17:05:58 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*res;

	res = (char *)s;
	while (*res)
	{
		if (*res == (char)c)
			return (res);
		res++;
	}
	if (*res == (char)c)
		return (res);
	return (NULL);
}

int	ft_str_is_charset(char *str, char *charset)
{
	int	i;
	int	j;
	int	valide;

	i = 0;
	while (str[i])
	{
		j = 0;
		valide = 0;
		while (charset[j])
		{
			if (str[i] == charset[j])
				valide = 1;
			j++;
		}
		if (!valide)
			return (1);
		i++;
	}
	return (0);
}
