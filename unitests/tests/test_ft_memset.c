//
// Created by Julie on 30/10/2023.
//

#include "../unitest.h"

int test_ft_memset(void) {
    char str[50];

    ft_bzero(str, 50);
    ft_memset(str, 'a', 13);
    if (ft_memcmp(str, "aaaaaaaaaaaaa", 13) != 0)
        return (0);
    ft_bzero(str, 50);
    ft_memset(str, 'i', 5);
    if (ft_memcmp(str, "iiiii", 5) != 0)
        return (0);
    ft_bzero(str, 50);
    ft_memset(str, '9', 0);
    if (ft_memcmp(str, "", 0) != 0)
        return (0);
    ft_bzero(str, 50);
    ft_memset(str, '-', 1);
    if (ft_memcmp(str, "-", 1) != 0)
        return (0);
    ft_bzero(str, 50);
    ft_memset(str, ']', 12);
    if (ft_memcmp(str, "]]]]]]]]]]]]]", 12) != 0)
        return (0);
    ft_bzero(str, 50);
    ft_memset(str, 'z', 11);
    if (ft_memcmp(str, "zzzzzzzzzzz", 11) != 0)
        return (0);
    ft_bzero(str, 50);
    ft_memset(str, 'A', 10);
    if (ft_memcmp(str, "AAAAAAAAAA", 10) != 0)
        return (0);
    return (1);
}