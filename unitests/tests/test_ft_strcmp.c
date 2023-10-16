//
// Created by Julie on 15/10/2023.
//

#include "../unitest.h"

int test_ft_strcmp(void) {
    if (ft_strcmp("Hello", "Hello") != 0)
        return (0);
    if (ft_strcmp("Hello", "Hello World!") != -32)
        return (0);
    if (ft_strcmp("Hello World!", "Hello") != 32)
        return (0);
    if (ft_strcmp("Hello", "") != 72)
        return (0);
    if (ft_strcmp("", "Hello") != -72)
        return (0);
    if (ft_strcmp("", "") != 0)
        return (0);
    return (1);
}