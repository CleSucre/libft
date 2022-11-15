/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 05:14:57 by jthomas           #+#    #+#             */
/*   Updated: 2022/11/11 04:20:04 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		end;
	int		i;
	int		j;

	start = -1;
	while (s1[++start])
		if (!ft_strchr(set, s1[start]))
			break ;
	end = ft_strlen(s1);
	while (s1[--end])
		if (!ft_strchr(set, s1[end]))
			break ;
	i = end - start + 1;
	if (i < 0)
		i = 0;
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	j = 0;
	while (i--)
		res[j++] = s1[start++];
	res[j] = '\0';
	return (res);
}
