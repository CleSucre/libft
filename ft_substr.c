/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:06:28 by jthomas           #+#    #+#             */
/*   Updated: 2022/11/29 05:06:54 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	res = (char *)malloc(sizeof(*s) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[start])
	{
		if (i == len)
			break ;
		res[i++] = s[start++];
	}
	res[i] = '\0';
	return (res);
}
