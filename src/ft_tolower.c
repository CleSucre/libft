/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:50:17 by jthomas           #+#    #+#             */
/*   Updated: 2022/12/07 17:12:17 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
 * Convert an uppercase letter to a lowercase letter.
 */

int	ft_tolower(int c)
{
	if (!ft_isalpha(c) || ft_islower(c))
		return (c);
	return (c + 32);
}
