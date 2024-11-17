/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:07:04 by julthoma          #+#    #+#             */
/*   Updated: 2023/11/02 17:07:05 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* V1.0
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		i;
	int		ii;

	if (!s1)
		return (NULL);
	start = -1;
	while (s1[++start])
		if (!ft_strchr(set, s1[start]))
			break ;
	i = ft_strlen(s1);
	while (s1[i] && !ft_strchr(set, s1[i]))
		i--;
	i = i - start + 1;
	if (i < 0)
		i = 0;
	res = (char *)ft_calloc(i + 1, sizeof(char));
	if (!res)
		return (NULL);
	ii = 0;
	while (i--)
		res[ii++] = s1[start++];
	return (res);
}
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		end;
	int		i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end >= start && ft_strchr(set, s1[end]))
		end--;
	i = end - start + 1;
	if (i <= 0)
		i = 0;
	res = (char *)ft_calloc(i + 1, sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (start <= end)
		res[i++] = s1[start++];
	res[i] = '\0';
	return (res);
}
