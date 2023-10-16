//
// Created by Julie on 15/10/2023.
//

#include "../unitest.h"

int test_ft_strdup(void) {
    char *str;

    str = ft_strdup("Hello World");
    if (ft_strcmp(str, "Hello World") != 0) {
        free(str);
        return (0);
    }
    free(str);
    str = ft_strdup("How you doing ?");
    if (ft_strcmp(str, "How you doing ?") != 0) {
        free(str);
        return (0);
    }
    free(str);
    str = ft_strdup("");
    if (ft_strcmp(str, "") != 0) {
        free(str);
        return (0);
    }
    free(str);
    return (1);
}