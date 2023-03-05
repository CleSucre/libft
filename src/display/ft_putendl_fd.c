/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 05:15:27 by jthomas           #+#    #+#             */
/*   Updated: 2023/01/28 15:20:44 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
 * Writes the string s to the given file descriptor, followed by a newline and return the number of characters printed.
 */

int	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return (-1);
	i = ft_putstr_fd(s, fd);
	i += write(fd, "\n", 1);
	return (i);
}
