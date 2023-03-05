/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:04:03 by jthomas           #+#    #+#             */
/*   Updated: 2022/12/07 17:08:06 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
 * Fill the first n bytes of the memory area pointed to by s with '\0'.
 */

void	ft_bzero(void *s, size_t n)
{
	char	*res;

	res = s;
	while (n-- > 0)
	{
		*res = 0;
		res++;
	}
}
