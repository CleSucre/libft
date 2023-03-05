/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:15:16 by jthomas           #+#    #+#             */
/*   Updated: 2022/12/07 17:10:08 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
 * Copy n bytes from memory area src to memory area dst.
 */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*res;
	const char	*cpy;

	if (dst == NULL && src == NULL)
		return (dst);
	res = dst;
	cpy = src;
	while (n-- > 0)
	{
		*res = *cpy;
		res++;
		cpy++;
	}
	return (dst);
}
