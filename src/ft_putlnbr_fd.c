/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlnbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:12:00 by jthomas           #+#    #+#             */
/*   Updated: 2023/01/28 15:21:56 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_putlnbr_fd(long n, int fd)
{
	long long	ll;
	int			i;

	ll = n;
	i = 0;
	if (ll < 0)
	{
		ft_putchar_fd('-', fd);
		ll *= -1;
		i++;
	}
	if (ll >= 9)
	{
		i += ft_putlnbr_fd(ll / 10, fd);
		i += ft_putlnbr_fd(ll % 10, fd);
	}
	if (ll <= 9)
	{
		ft_putchar_fd(ll + '0', fd);
		i++;
	}
	else
		i += ft_putlnbr_fd(ll / 10, fd) + ft_putlnbr_fd(ll % 10, fd);
	return (i);
}
