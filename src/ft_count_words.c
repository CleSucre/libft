/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 03:48:19 by julthoma          #+#    #+#             */
/*   Updated: 2023/11/22 03:48:19 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *str, char const *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != charset[0] && str[i] != charset[1])
		{
			count++;
			while (str[i] != charset[0] && str[i] != charset[1] && str[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}
