/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:21:37 by jthomas           #+#    #+#             */
/*   Updated: 2022/11/04 20:50:00 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	ii;

	if (!*needle)
		return ((char *)haystack);
	i = -1;
	while (haystack[++i] && i < len)
	{
		ii = 0;
		if (haystack[i] == needle[ii])
		{
			while (needle[ii] && i + ii < len)
			{
				if (haystack[i + ii] != needle[ii])
					break ;
				if (!needle[ii++ + 1])
					return ((char *)haystack + i);
			}
		}
	}
	return (NULL);
}
