//
// Created by Julie on 30/10/2023.
//

#include "../unitest.h"

char    ft_test_strmapi_add(unsigned int add, char c) {
    return (c + add);
}

char    ft_test_strmapi_sub(unsigned int add, char c) {
    return (c - add);
}

int test_ft_strmapi(void) {
    char *res;

    res = ft_strmapi("Hello World !", ft_test_strmapi_add);
    if (ft_strcmp(res, "Hfnos%]vzun+-") != 0) {
        free(res);
        return (0);
    }
    free(res);
    res = ft_strmapi("", ft_test_strmapi_add);
    if (ft_strcmp(res, "") != 0) {
        free(res);
        return (0);
    }
    free(res);
    res = ft_strmapi("yooo", ft_test_strmapi_sub);
    if (ft_strcmp(res, "ynml") != 0) {
        free(res);
        return (0);
    }
    free(res);
    return (1);
}