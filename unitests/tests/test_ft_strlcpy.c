//
// Created by Julie on 30/10/2023.
//

#include "../unitest.h"

int test_ft_strlcpy(void) {
    char dest[10];
    int res;

    res = ft_strlcpy(dest, "Hello World!", 5);
    if (res != 12 || ft_strcmp(dest, "Hello") != -111)
        return (0);
    res = ft_strlcpy(dest, "Hello my friend !", 0);
    if (res != 17 || ft_strcmp(dest, "Hello") != -111)
        return (0);
    res = ft_strlcpy(dest, "Hello my friend !", 1);
    if (res != 17 || ft_strcmp(dest, "H") != -72)
        return (0);
    res = ft_strlcpy(dest, "Hello my friend !", 2);
    if (res != 17 || ft_strcmp(dest, "He") != -101)
        return (0);
    res = ft_strlcpy(dest, "Hello my friend !", 3);
    if (res != 17 || ft_strcmp(dest, "Hel") != -108)
        return (0);
    res = ft_strlcpy(dest, "Hello my friend !", 4);
    if (res != 17 || ft_strcmp(dest, "Hell") != -108)
        return (0);
    res = ft_strlcpy(dest, "", 5);
    if (res != 0 || ft_strcmp(dest, "") != 0)
        return (0);
    res = ft_strlcpy(dest, "Hello my friend !", 0);
    if (res != 17 || ft_strcmp(dest, "") != 0)
        return (0);
    return (1);
}