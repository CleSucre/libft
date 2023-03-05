/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 05:15:39 by jthomas           #+#    #+#             */
/*   Updated: 2023/01/28 15:23:10 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	long	i;
	int		temp;

	i = n;
	temp = 0;
	if (i < 0)
	{
		ft_putchar_fd('-', fd);
		i *= -1;
		temp++;
	}
	if (i < 10)
	{
		ft_putchar_fd(i + '0', fd);
		temp++;
	}
	else
	{
		temp += ft_putnbr_fd(i / 10, fd);
		temp += ft_putnbr_fd(i % 10, fd);
	}
	return (temp);
}
