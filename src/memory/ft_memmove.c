/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:32:33 by jthomas           #+#    #+#             */
/*   Updated: 2022/12/07 17:10:12 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
 * Move memory area src to memory area dst.
 */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*res;
	const char	*cpy;
	size_t		i;

	if (dst == NULL && src == NULL)
		return (dst);
	res = dst;
	cpy = src;
	if (dst > src)
	{
		while (len-- > 0)
			res[len] = cpy[len];
		return (dst);
	}
	i = 0;
	while (i < len)
	{
		res[i] = cpy[i];
		i++;
	}
	return (dst);
}
