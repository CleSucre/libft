/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 00:56:00 by julthoma          #+#    #+#             */
/*   Updated: 2024/10/16 00:36:00 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	pivot(char *tabenv[], int min, int max)
{
	int		i;
	int		j;
	char	*pivot;

	pivot = tabenv[max];
	i = min - 1;
	j = min;
	while (j <= max - 1)
	{
		if (ft_strcmp(tabenv[j], pivot) < 0)
		{
			i++;
			ft_swap(&tabenv[i], &tabenv[j]);
		}
		j++;
	}
	ft_swap(&tabenv[i + 1], &tabenv[max]);
	return (i + 1);
}

/**
 * @brief Quick sort an array of strings
 *
 * @param char **arr The array to sort
 * @param int start The start index
 * @param int end The end index
 */
void	ft_sort(char *tabenv[], int min, int max)
{
	int	pi;

	if (min < max)
	{
		pi = pivot(tabenv, min, max);
		ft_sort(tabenv, min, pi - 1);
		ft_sort(tabenv, pi + 1, max);
	}
}
