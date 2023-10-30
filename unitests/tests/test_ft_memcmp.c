//
// Created by Julie on 30/10/2023.
//

#include "../unitest.h"

int test_ft_memcmp(void) {
    if (ft_memcmp("Hello", "Hello", 5) != 0)
        return (0);
    if (ft_memcmp("Hello", "Hello World!", 10) != -32)
        return (0);
    if (ft_memcmp("Hello World!", "Hello", 10) != 32)
        return (0);
    if (ft_memcmp("Hello", "", 1) != 72)
        return (0);
    if (ft_memcmp("", "Hello", 1) != -72)
        return (0);
    if (ft_memcmp("", "", 1) != 0)
        return (0);
    if (ft_memcmp("Hello", "Hello", 0) != 0)
        return (0);
    if (ft_memcmp("Hello", "Hello World!", 5) != 0)
        return (0);
    if (ft_memcmp("Hello World!", "Hello", 5) != 0)
        return (0);
    if (ft_memcmp("Hello", "Hello my Friend", 5) != 0)
        return (0);
    if (ft_memcmp("Hello my Friend", "Hello", 5) != 0)
        return (0);
    if (ft_memcmp("Hello", "Hello my Friend", 6) != -32)
        return (0);
    if (ft_memcmp("Hello my Friend", "Hello", 6) != 32)
        return (0);
    return (1);
}