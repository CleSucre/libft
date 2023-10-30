//
// Created by Julie on 30/10/2023.
//

#include "../unitest.h"

int test_ft_substr(void)
{
    char *res;

    res = ft_substr("lorem ipsum dolor sit amet", 6, 5);
    if (ft_strcmp(res, "ipsum") != 0) {
        free(res);
        return (0);
    }
    free(res);
    res = ft_substr("lorem ipsum dolor sit amet", 0, 5);
    if (ft_strcmp(res, "lorem") != 0) {
        free(res);
        return (0);
    }
    free(res);
    res = ft_substr("lorem ipsum dolor sit amet", 6, 0);
    if (ft_strcmp(res, "") != 0) {
        free(res);
        return (0);
    }
    free(res);
    res = ft_substr("lorem ipsum dolor sit amet", 6, 100);
    if (ft_strcmp(res, "ipsum dolor sit amet") != 0) {
        free(res);
        return (0);
    }
    free(res);
    res = ft_substr("lorem ipsum dolor sit amet", 100, 100);
    if (ft_strcmp(res, "") != 0) {
        free(res);
        return (0);
    }
    free(res);
    res = ft_substr("lorem ipsum dolor sit amet", 0, 100);
    if (ft_strcmp(res, "lorem ipsum dolor sit amet") != 0) {
        free(res);
        return (0);
    }
    free(res);
    res = ft_substr("lorem ipsum dolor sit amet", 0, 0);
    if (ft_strcmp(res, "") != 0) {
        free(res);
        return (0);
    }
    free(res);
    res = ft_substr("lorem ipsum dolor sit amet", 0, 1);
    if (ft_strcmp(res, "l") != 0) {
        free(res);
        return (0);
    }
    free(res);
    res = ft_substr("", 0, 1);
    if (ft_strcmp(res, "") != 0) {
        free(res);
        return (0);
    }
    free(res);
    return (1);
}
