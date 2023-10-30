//
// Created by Julie on 15/10/2023.
//

#include "unitest.h"

int ft_test(t_test_info *info)
{
    if (info->f()) {
        ft_putstr_fd(GREEN, 1);
        ft_putstr_fd("test passed: ", 1);
        ft_putstr_fd(info->name, 1);
        ft_putstr_fd("\n", 1);
        ft_putstr_fd(RESET, 1);
        return (1);
    }
    ft_putstr_fd(RED, 1);
    ft_putstr_fd("test failed: ", 1);
    ft_putstr_fd(info->name, 1);
    ft_putstr_fd("\n", 1);
    ft_putstr_fd(RESET, 1);
    return (0);
}

int main(void) {
    t_test_info tests[] = {
            {test_ft_strcmp,          "ft_strcmp"},
            {test_ft_atoi,          "ft_atoi"},
            {test_ft_bzero,          "ft_bzero"},
            {test_ft_isalnum,          "ft_isalnum"},
            {test_ft_isalpha,          "ft_isalpha"},
            {test_ft_isascii,          "ft_isascii"},
            {test_ft_isdigit,          "ft_isdigit"},
            {test_ft_isprint,          "ft_isprint"},
            {test_ft_isspace,          "ft_isspace"},
            {test_ft_isupper,          "ft_isupper"},
            {test_ft_itoa,          "ft_itoa"},
            {test_ft_nbrlen,          "ft_nbrlen"},
            {test_ft_split,          "ft_split"},
            {test_ft_tolower,          "ft_tolower"},
            {test_ft_toupper,          "ft_toupper"},
            {test_ft_str_count_char,          "ft_str_count_char"},
            {test_ft_str_count_chars,          "ft_str_count_chars"},
            {test_ft_strchr,          "ft_strchr"},
            {test_ft_strdup,          "ft_strdup"},
            {test_ft_striteri,          "ft_striteri"},
            {test_ft_strjoin,          "ft_strjoin"},
            {test_ft_strlcat,          "ft_strlcat"},
            {test_ft_strlcpy,          "ft_strlcpy"},
            {test_ft_strlen,          "ft_strlen"},
            {test_ft_strmapi,          "ft_strmapi"},
            {test_ft_strncmp,          "ft_strncmp"},
            {test_ft_strnstr,          "ft_strnstr"},
            {test_ft_strrchr,          "ft_strrchr"},
            {test_ft_strtrim,          "ft_strtrim"},
            {test_ft_substr,          "ft_substr"},
            {test_ft_memcmp,          "ft_memcmp"},
            {test_ft_memchr,          "ft_memchr"},
            {test_ft_memcpy,          "ft_memcpy"},
            {test_ft_memmove,          "ft_memmove"},
            {test_ft_memset,          "ft_memset"},
            {test_ft_calloc,          "ft_calloc"},
    };
    int         i;
    int         nb_tests;
    int         nb_tests_passed;

    i = 0;
    nb_tests = sizeof(tests) / sizeof(t_test_info);
    nb_tests_passed = 0;
    while (i < nb_tests) {
        nb_tests_passed += ft_test(&tests[i]);
        i++;
    }
    if (nb_tests_passed == nb_tests) {
        ft_putstr_fd(GREEN, 1);
        ft_putstr_fd("All ", 1);
        ft_putnbr_fd(nb_tests, 1);
        ft_putstr_fd(" tests succeeded", 1);
        ft_putstr_fd(RESET, 1);
    } else {
        ft_putstr_fd(RED, 1);
        ft_putnbr_fd(nb_tests_passed, 1);
        ft_putstr_fd("/", 1);
        ft_putnbr_fd(nb_tests, 1);
        ft_putstr_fd(" tests failed", 1);
        ft_putstr_fd(RESET, 1);
    }
    return (0);
}