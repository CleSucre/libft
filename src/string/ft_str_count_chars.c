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

//count the number of chars in string s1 corresponding to chars in s2.
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
