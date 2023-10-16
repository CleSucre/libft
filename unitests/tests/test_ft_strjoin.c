//
// Created by Julie on 15/10/2023.
//

#include "../unitest.h"

int test_ft_strjoin(void) {
    char *str;

    str = ft_strjoin("Hello", " world");
    if (ft_strcmp(str, "Hello world") != 0) {
        free(str);
        return (0);
    }
    free(str);
    str = ft_strjoin("", " world");
    if (ft_strcmp(str, " world") != 0) {
        free(str);
        return (0);
    }
    free(str);
    str = ft_strjoin("Hello", "");
    if (ft_strcmp(str, "Hello") != 0) {
        free(str);
        return (0);
    }
    free(str);
    str = ft_strjoin("", "");
    if (ft_strcmp(str, "") != 0) {
        free(str);
        return (0);
    }
    free(str);
    return (1);
}