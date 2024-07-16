/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:06:24 by julthoma          #+#    #+#             */
/*   Updated: 2023/11/02 17:06:26 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_charjoin(char *str, char c)
{
	char	*dst;
	size_t	i;

	if (!str)
	{
		dst = ft_calloc(2, sizeof(char));
		dst[0] = c;
		return (dst);
	}
	dst = ft_calloc(ft_strlen(str) + 2, sizeof(char));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < ft_strlen(str))
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = c;
	i++;
	dst[i] = '\0';
	free(str);
	return (dst);
}
