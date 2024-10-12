/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variable_replacer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 21:00:00 by julthoma          #+#    #+#             */
/*   Updated: 2024/10/12 21:00:00 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copy the contents of a file descriptor to another
 *
 * @param int fd_from file descriptor to read from
 * @param int fd_to file descriptor to write to
 * @return ssize_t number of bytes written on success, -1 on failure
 */
ssize_t	copy_fd_contents(int fd_from, int fd_to)
{
	char	buf[BUFFER_SIZE];
	ssize_t	bytes_read;
	ssize_t	bytes_written;

	bytes_read = read(fd_from, buf, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		bytes_written = write(fd_to, buf, bytes_read);
		if (bytes_written == -1)
			return (-1);
		bytes_read = read(fd_from, buf, BUFFER_SIZE);
	}
	return (bytes_written);
}
