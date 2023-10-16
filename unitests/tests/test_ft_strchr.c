//
// Created by Julie on 15/10/2023.
//

#include "../unitest.h"

int test_ft_strchr(void) {
    if (ft_strcmp(ft_strchr("Hello World", 'W'), "World") != 0)
        return (0);
    if (ft_strcmp(ft_strchr("Hello World", 'l'), "llo World") != 0)
        return (0);
    if (ft_strcmp(ft_strchr("Hello World", 'H'), "Hello World") != 0)
        return (0);
    if (ft_strcmp(ft_strchr("Hello World", ' '), " World") != 0)
        return (0);
    if (ft_strchr("Hello World", 'z') != NULL)
        return (0);
    if (ft_strcmp(ft_strchr("", '\0'), "") != 0)
        return (0);
    if (ft_strcmp(ft_strchr("Hello World", '\0'), "\0") != 0)
        return (0);
    return (1);
}