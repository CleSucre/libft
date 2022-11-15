/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 04:45:39 by jthomas           #+#    #+#             */
/*   Updated: 2022/11/03 18:22:26 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ii;

	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	if (dstsize == 0)
		return (i + ft_strlen(src));
	ii = i;
	while (src[i - ii] && i < dstsize - 1)
	{
		dst[i] = src[i - ii];
		i++;
	}
	if (ii < dstsize)
		dst[i] = '\0';
	return (ii + ft_strlen(src));
}
