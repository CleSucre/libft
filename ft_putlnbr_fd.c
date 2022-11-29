/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlnbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:12:00 by jthomas           #+#    #+#             */
/*   Updated: 2022/11/29 05:15:37 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlnbr_fd(long n, int fd)
{
	long long	ll;

	ll = n;
	if (ll < 0)
	{
		ft_putchar_fd('-', fd);
		ll *= -1;
	}
	if (ll >= 9)
	{
		ft_putlnbr_fd(ll / 10, fd);
		ft_putlnbr_fd(ll % 10, fd);
	}
	if (ll <= 9)
		ft_putchar_fd(ll + '0', fd);
	else
	{
		ft_putlnbr_fd(ll / 10, fd);
		ft_putlnbr_fd(ll % 10, fd);
	}
}
