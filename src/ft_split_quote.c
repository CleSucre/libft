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

static char	**initialize_result(int capacity)
{
	char	**result;

	result = (char **)malloc(capacity * sizeof(char *));
	if (!result)
		return (NULL);
	return (result);
}

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

static char	*create_word(const char *start, int length)
{
	char	*word;

	word = (char *)malloc((length + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_strncpy(word, start, length);
	word[length] = '\0';
	return (word);
}

static char	**process_string(const char *str, const char *charset,
		const char *quote_set, char **result)
{
	int			count;
	char		current_quote;
	const char	*start;
	int			capacity;

	count = 0;
	current_quote = 0;
	capacity = 10;
	while (*str)
	{
		while (*str && !current_quote && ft_strchr(charset, *str))
			str++;
		if (!*str)
			break ;
		start = str;
		while (*str && (current_quote || !ft_strchr(charset, *str)))
		{
			if (!current_quote && ft_strchr(quote_set, *str))
				current_quote = *str;
			else if (current_quote == *str)
				current_quote = 0;
			str++;
		}
		if (count == capacity && !resize_result(&result, &capacity))
		{
			ft_tabfree(result);
			return (NULL);
		}
		result[count++] = create_word(start, str - start);
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
