//
// Created by Julie on 15/10/2023.
//

#include "../unitest.h"

int test_ft_strlcat(void) {
    int     res;
    char    dst[15] = "Hello ";
    char    dst1[15] = "Hello ";
    char    dst2[15] = "Hello ";
    char    dst3[20] = "Hello ";
    char    dst4[15] = "Hello ";
    char    dst5[15] = "";

    res = ft_strlcat(dst, "world !", 14);
    if (res != 13 || ft_strcmp(dst, "Hello world !") != 0)
        return (0);
    res = ft_strlcat(dst1, "man !", 14);
    if (res != 11 || ft_strcmp(dst1, "Hello man !") != 0)
        return (0);
    res = ft_strlcat(dst2, "world !", 10);
    if (res != 13 || !ft_strcmp(dst2, "Hello wo"))
        return (0);
    res = ft_strlcat(dst3, "the grinch", 14);
    if (res != 16 || ft_strcmp(dst3, "Hello the gri") != 0)
        return (0);
    res = ft_strlcat(dst4, "", 14);
    if (res != 6 || ft_strcmp(dst4, "Hello ") != 0)
        return (0);
    res = ft_strlcat(dst5, "Hello", 2);
    if (res != 5 || ft_strcmp(dst5, "H") != 0)
        return (0);
    return (1);
}