/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 00:19:41 by jthomas           #+#    #+#             */
/*   Updated: 2022/11/11 01:32:29 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_insert(char *dst, long n, int *i)
{
	if (n > 9)
	{
		ft_insert(dst, n / 10, i);
		ft_insert(dst, n % 10, i);
	}
	else
		dst[(*i)++] = n + '0';
}

char	*ft_itoa(int n)
{
	char	*res;
	long	temp;
	int		i;

	res = (char *)malloc(sizeof(char) * (ft_nbrlen(temp = n) + 1));
	if (!res)
		return (NULL);
	i = 0;
	if (temp < 0)
	{
		res[i++] = '-';
		temp *= -1;
	}
	ft_insert(res, temp, &i);
	res[i] = '\0';
	return (res);
}
