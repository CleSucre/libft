//
// Created by Julie on 30/10/2023.
//

#include "../unitest.h"

int test_ft_memcpy(void) {
    char str[50];

    ft_bzero(str, 50);
    ft_memcpy(str, "Hello World!", 13);
    if (ft_memcmp(str, "Hello World!", 13) != 0)
        return (0);
    ft_bzero(str, 50);
    ft_memcpy(str, "Hello World!", 5);
    if (ft_memcmp(str, "Hello", 5) != 0)
        return (0);
    ft_bzero(str, 50);
    ft_memcpy(str, "Hello World!", 0);
    if (ft_memcmp(str, "", 0) != 0)
        return (0);
    ft_bzero(str, 50);
    ft_memcpy(str, "Hello World!", 1);
    if (ft_memcmp(str, "H", 1) != 0)
        return (0);
    ft_bzero(str, 50);
    ft_memcpy(str, "Hello World!", 12);
    if (ft_memcmp(str, "Hello World!", 12) != 0)
        return (0);
    ft_bzero(str, 50);
    ft_memcpy(str, "Hello World!", 11);
    if (ft_memcmp(str, "Hello World", 11) != 0)
        return (0);
    return (1);
}