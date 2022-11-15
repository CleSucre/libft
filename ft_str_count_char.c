/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_count_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 05:46:35 by jthomas           #+#    #+#             */
/*   Updated: 2022/11/11 00:51:24 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//count number of int c in string str.
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
