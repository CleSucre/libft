/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 05:14:57 by jthomas           #+#    #+#             */
/*   Updated: 2022/12/07 17:12:09 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		i;
	int		j;

	if (!s1)
		return (NULL);
	start = -1;
	while (s1[++start])
		if (!ft_strchr(set, s1[start]))
			break ;
	i = ft_strlen(s1);
	while (s1[--i])
		if (!ft_strchr(set, s1[i]))
			break ;
	i = i - start + 1;
	if (i < 0)
		i = 0;
	res = (char *)ft_calloc(sizeof(char), (i + 1));
	if (!res)
		return (NULL);
	j = 0;
	while (i--)
		res[j++] = s1[start++];
	return (res);
}
