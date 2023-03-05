/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_count_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 05:46:35 by jthomas           #+#    #+#             */
/*   Updated: 2022/12/07 17:11:02 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
 * Count the number of char int c in a string.
 */

size_t	ft_str_count_char(char const *str, int c)
{
	size_t	res;

	res = 0;
	while (*str)
	{
		if (*str == (char)c)
			res++;
		str++;
	}
	return (res);
}
