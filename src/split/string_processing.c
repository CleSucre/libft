/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_processing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 07:19:00 by julthoma          #+#    #+#             */
/*   Updated: 2024/09/05 07:19:00 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**initialize_result(int capacity)
{
	char	**result;

	result = (char **)malloc(capacity * sizeof(char *));
	if (!result)
		return (NULL);
	return (result);
}

const char	*skip_charset(const char *str, const char *charset)
{
	while (*str && ft_strchr(charset, *str))
		str++;
	return (str);
}

char	handle_quote(char current_quote, const char *quote_set, char c)
{
	if (!current_quote && ft_strchr(quote_set, c))
		return (c);
	else if (current_quote == c)
		return (0);
	return (current_quote);
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

char	*extract_word(const char *start, int length)
{
	return (create_word(start, length));
}
