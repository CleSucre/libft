#include "libft.h"

// Helper function to handle quote state
static void	handle_quote(char c, int *in_quotes, char *quote_char, const char *quote_set)
{
	while (*quote_set) {
		if (c == *quote_set && (!(*in_quotes) || c == *quote_char)) {
			*in_quotes = !(*in_quotes);
			*quote_char = c;
			break;
		}
		quote_set++;
	}
}

// Helper function to count the number of words
static int	count_words(const char *str, const char *charset, const char *quote_set)
{
	int		count;
	int		in_quotes;
	char	quote_char;

	count = 0;
	in_quotes = 0;
	quote_char = '\0';
	while (*str) {
		while (*str && ft_is_charset(*str, charset) && !in_quotes)
			str++;
		if (*str) {
			count++;
			while (*str && (!ft_is_charset(*str, charset) || in_quotes)) {
				handle_quote(*str, &in_quotes, &quote_char, quote_set);
				str++;
			}
		}
	}
	return (count);
}

// Helper function to get the length of a word
static size_t	get_word_length(const char *str, const char *charset, const char *quote_set)
{
	int		in_quotes;
	char	quote_char;
	size_t	len;

	in_quotes = 0;
	quote_char = '\0';
	len = 0;
	while (*str && (!ft_is_charset(*str, charset) || in_quotes)) {
		handle_quote(*str, &in_quotes, &quote_char, quote_set);
		str++;
		len++;
	}
	return (len);
}

// Helper function to copy a word to the result array
static char	*copy_word(const char **str_ptr, const char *charset, const char *quote_set)
{
	const char	*str;
	const char	*start;
	size_t		len;
	char		*word;

	str = *str_ptr;
	start = str;
	len = get_word_length(str, charset, quote_set);
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	ft_strncpy(word, start, len);
	word[len] = '\0';
	*str_ptr = start + len;
	return (word);
}

/**
 * @brief Split a string with a charset, support custom quotes
 *        If a charset is between custom quotes, it will be ignored
 *
 * @param char const *str
 * @param char const *charset
 * @param char const *quote_set  // New parameter for custom quote characters
 * @return char	**
 */
char	**ft_split_quote(char const *str, char const *charset, const char *quote_set)
{
	char	**result;
	int		i;

	if (!str || !charset || !quote_set)
		return (NULL);
	result = (char **)malloc((count_words(str, charset, quote_set) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*str) {
		while (*str && ft_is_charset(*str, charset))
			str++;
		if (*str) {
			result[i] = copy_word(&str, charset, quote_set);
			if (!result[i++]) {
				ft_freetab(result);
				return (NULL);
			}
		}
	}
	result[i] = NULL;
	return (result);
}
