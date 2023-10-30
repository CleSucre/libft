//
// Created by Julie on 30/10/2023.
//

#include "../unitest.h"

int test_ft_memmove(void) {
    char src[] = "Hello, World!";
    char dest[20];

    ft_memmove(dest, src, 7);
    if (ft_memcmp(dest, "Hello, ", 7) != 0)
        return (0);
    ft_memcpy(src, "Hello, World!", 13);
    ft_memmove(dest, src, 0);
    if (ft_memcmp(dest, "", 0) != 0)
        return (0);
    ft_memcpy(src, "Hello, World!", 13);
    ft_memmove(src, src + 7, 7);
    if (ft_memcmp(src, "World!", 7) != 0)
        return (0);
    ft_memmove(src + 7, src, 7);
    if (ft_memcmp(src, "World!", 7) != 0)
        return (0);
    ft_memmove(src, src, 7);
    if (ft_memcmp(src, "World!", 7) != 0)
        return (0);
    ft_memcpy(src, "Hello, World!", 13);
    ft_memmove(src, src + 4, 0);
    if (ft_memcmp(src, "Hello, World!", 13) != 0)
        return (0);
    ft_memcpy(src, "Hello, World!", 13);
    ft_memmove(src + 4, src, 0);
    if (ft_memcmp(src, "Hello, World!", 13) != 0)
        return (0);
    return (1);
}