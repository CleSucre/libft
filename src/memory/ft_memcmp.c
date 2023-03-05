/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:37:42 by jthomas           #+#    #+#             */
/*   Updated: 2022/12/07 17:10:02 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
 * Compares byte string s1 against byte string s2. Both strings are assumed to
 * be n bytes long.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*cps1;
	const unsigned char	*cps2;

	cps1 = (const unsigned char *)s1;
	cps2 = (const unsigned char *)s2;
	while (n-- > 0)
	{
		if (*cps1 != *cps2)
			return (*cps1 - *cps2);
		cps1++;
		cps2++;
	}
	return (0);
}
