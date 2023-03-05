/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:01:00 by jthomas           #+#    #+#             */
/*   Updated: 2023/01/28 15:22:50 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
 * ft_putnbr_base_fd: print a number in a given base on a file descriptor (fd) and return the number of characters printed.
 */

int	ft_putnbr_base_fd(int nbr, char *base, int fd)
{
	long	i;
	int		size;
	int		temp;

	size = ft_strlen(base);
	i = nbr;
	if (i < 0)
	{
		ft_putchar_fd('-', fd);
		i *= -1;
	}
	if (i < size)
	{
		ft_putchar_fd(base[i], fd);
		return (1);
	}
	else
	{
		temp = 0;
		temp += ft_putnbr_base_fd(i / size, base, fd);
		temp += ft_putnbr_base_fd(i % size, base, fd);
	}
	return (temp);
}
