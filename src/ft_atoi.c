/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:54:30 by jthomas           #+#    #+#             */
/*   Updated: 2022/12/07 17:07:42 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
 * Convert a string to an integer.
 */

int	ft_atoi(const char *str)
{
	long int	res;
	int			is_n;

	while (ft_isspace(*str))
		str++;
	is_n = 0;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			is_n = 1;
	res = 0;
	while (ft_isdigit(*str))
		res = res * 10 + (*str++ - '0');
	if (is_n)
		res /= -1;
	return (res);
}
