#ifndef UNITEST_H
#define UNITEST_H

# include <unistd.h>
# include "../includes/libft.h"
# include "../includes/colors.h"

typedef struct s_test_info {
    int     (*f)(void);
    char    *name;
}   t_test_info;

int test_ft_atoi(void);
int test_ft_bzero(void);
int test_ft_isalnum(void);
int test_ft_isalpha(void);
int test_ft_isascii(void);
int test_ft_isdigit(void);
int test_ft_islower(void);
int test_ft_isprint(void);
int test_ft_isspace(void);
int test_ft_isupper(void);
int test_ft_itoa(void);
int test_ft_nbrlen(void);
int test_ft_split(void);
int test_ft_tolower(void);
int test_ft_toupper(void);

int test_ft_str_count_char(void);
int test_ft_str_count_chars(void);
int test_ft_strchr(void);
int test_ft_strcmp(void);
int test_ft_strdup(void);
int test_ft_striteri(void);
int test_ft_strjoin(void);
int test_ft_strlcat(void);
int test_ft_strlcpy(void);
int test_ft_strlen(void);
int test_ft_strmapi(void);
int test_ft_strncmp(void);
int test_ft_strnstr(void);
int test_ft_strrchr(void);
int test_ft_strtrim(void);
int test_ft_substr(void);

#endif