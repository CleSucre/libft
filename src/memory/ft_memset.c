/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:28:38 by jthomas           #+#    #+#             */
/*   Updated: 2022/12/07 17:10:17 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
 * Writes len bytes of value c (converted to an unsigned char) to the string b.
 */

void	*ft_memset(void *b, int c, size_t len)
{
	char	*res;

	res = b;
	while (len-- > 0)
	{
		*res = c;
		res++;
	}
	return (b);
}
