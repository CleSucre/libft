/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julthoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:05:52 by julthoma          #+#    #+#             */
/*   Updated: 2023/11/02 17:05:54 by julthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Helper function to handle quote state
static void	handle_quote(char c, int *in_quotes, char *quote_char)
{
	if ((c == '"' || c == '\'') && (!(*in_quotes) || c == *quote_char))
	{
		*in_quotes = !(*in_quotes);
		*quote_char = c;
	}
}

// Helper function to count the number of words
static int	count_words(const char *str, const char *charset)
{
	int		count;
	int		in_quotes;
	char	quote_char;

	count = 0;
	in_quotes = 0;
	quote_char = '\0';
	while (*str)
	{
		while (*str && ft_is_charset(*str, charset) && !in_quotes)
			str++;
		if (*str)
		{
			count++;
			while (*str && (!ft_is_charset(*str, charset) || in_quotes))
			{
				handle_quote(*str, &in_quotes, &quote_char);
				str++;
			}
		}
	}
	return (count);
}

// Helper function to get the length of a word
static size_t	get_word_length(const char *str, const char *charset)
{
	int		in_quotes;
	char	quote_char;
	size_t	len;

	in_quotes = 0;
	quote_char = '\0';
	len = 0;
	while (*str && (!ft_is_charset(*str, charset) || in_quotes))
	{
		handle_quote(*str, &in_quotes, &quote_char);
		str++;
		len++;
	}
	return (len);
}

// Helper function to copy a word to the result array
static char	*copy_word(const char **str_ptr, const char *charset)
{
	const char	*str;
	const char	*start;
	size_t		len;
	char		*word;

	str = *str_ptr;
	start = str;
	len = get_word_length(str, charset);
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	ft_strncpy(word, start, len);
	word[len] = '\0';
	*str_ptr = start + len;
	return (word);
}

/**
 * @brief Split a string with a charset, support quote
 * 			If a charset is between quote, it will be ignored
 *
 * @param char const *str
 * @param char const *charset
 * @return char	**
 */
char	**ft_split_quote(char const *str, char const *charset)
{
	char	**result;
	int		i;

	if (!str || !charset)
		return (NULL);
	result = (char **)malloc((count_words(str, charset) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && ft_is_charset(*str, charset))
			str++;
		if (*str)
		{
			result[i] = copy_word(&str, charset);
			if (!result[i++])
			{
				ft_freetab(result);
				return (NULL);
			}
		}
	}
	result[i] = NULL;
	return (result);
}
