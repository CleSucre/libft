/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_dir.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 00:56:00 by julthoma          #+#    #+#             */
/*   Updated: 2024/10/16 00:36:00 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief List the files in the directory
 *
 * @param char *path The path to the directory to load
 * @return char** The list of files in the directory
 */
char	**ft_list_dir(char *path)
{
	DIR				*dir;
	char			**files;
	struct dirent	*dirent;

	files = NULL;
	if (access(path, R_OK) == -1)
		return (NULL);
	dir = opendir(path);
	dirent = readdir(dir);
	while (dirent)
	{
		ft_tabadd(&files, dirent->d_name);
		dirent = readdir(dir);
	}
	closedir(dir);
	return (files);
}
