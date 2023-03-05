/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:10:07 by jthomas           #+#    #+#             */
/*   Updated: 2022/12/07 17:09:56 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
 * The memchr() function locates the first occurrence of c (converted to an unsigned char) in string s.
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*res;

	res = (char *)s;
	while (n--)
	{
		if (*res == (char)c)
			return (res);
		res++;
	}
	return (NULL);
}
