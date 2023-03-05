/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 05:14:13 by jthomas           #+#    #+#             */
/*   Updated: 2022/12/07 17:10:28 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
 * Writes the character c to the given file descriptor and returns 1 if successful
 * or -1 if an error occurred.
 */

int	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}
