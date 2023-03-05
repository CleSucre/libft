/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:33:45 by jthomas           #+#    #+#             */
/*   Updated: 2022/12/07 17:12:22 by jthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
 * Convert a lowercase letter to an uppercase letter.
 */

int	ft_toupper(int c)
{
	if (!ft_isalpha(c) || ft_isupper(c))
		return (c);
	return (c - 32);
}
