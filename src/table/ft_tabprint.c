/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <julthoma@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 03:41:13 by julthoma          #+#    #+#             */
/*   Updated: 2024/07/19 04:10:39 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tabprint(const char **tab, const char *prefix,
			const char *suffix, int fd)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		ft_putstr_fd(prefix, fd);
		ft_putstr_fd(tab[i], fd);
		ft_putstr_fd(suffix, fd);
		ft_putchar_fd('\n', fd);
		i++;
	}
}
