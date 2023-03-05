/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_count_chars.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 05:51:32 by jthomas           #+#    #+#             */
/*   Updated: 2022/12/07 17:11:07 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
 * Count the number of char in s2 in a string.
 */

size_t	ft_str_count_chars(char const *s1, char const *s2)
{
	size_t	res;

	res = 0;
	while (*s1)
	{
		if (ft_str_count_char(s2, *s1))
			res++;
		s1++;
	}
	return (res);
}
