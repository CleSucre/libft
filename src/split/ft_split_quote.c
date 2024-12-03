/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_quote.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:06:24 by julthoma          #+#    #+#             */
/*   Updated: 2024/06/27 11:06:26 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	resize_result(char ***result, int *capacity)
{
	int		new_capacity;
	char	**new_result;

	new_capacity = *capacity * 2;
	new_result = (char **)realloc(*result, new_capacity * sizeof(char *));
	if (!new_result)
		return (0);
	*result = new_result;
	*capacity = new_capacity;
	return (1);
}

static int	allocate_result(char ***result, int *capacity, int count)
{
	if (count == *capacity)
	{
		*capacity *= 2;
		if (!resize_result(result, capacity))
		{
			ft_tabfree(*result);
			return (0);
		}
	}
	return (1);
}

static char	**process_string(const char *str, const char *charset,
								const char *quote_set, char **result)
{
	int			count;
	char		current_quote;
	int			capacity;
	const char	*start;

	count = 0;
	current_quote = 0;
	capacity = 10;
	while (*str)
	{
		str = skip_charset(str, charset);
		if (!*str)
			break ;
		start = str;
		while (*str && (current_quote || !ft_strchr(charset, *str)))
		{
			current_quote = handle_quote(current_quote, quote_set, *str);
			str++;
		}
		if (!allocate_result(&result, &capacity, count))
			return (NULL);
		result[count++] = extract_word(start, str - start);
	}
	result[count] = NULL;
	return (result);
}

/**
 * @brief Split the string into words,
 * 		if the word is quoted, don't split what's inside.
 *
 * @param str The string to split.
 * @param charset The set of delimiter characters.
 * @return A dynamically allocated array of strings, NULL-terminated.
 */
char	**ft_split_quote(const char *str,
			const char *charset, const char *quote_set)
{
	char	**result;

	if (!str)
		return (NULL);
	result = initialize_result(10);
	if (!result)
		return (NULL);
	result = process_string(str, charset, quote_set, result);
	return (result);
}
