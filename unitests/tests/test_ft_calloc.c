//
// Created by Julie on 30/10/2023.
//

#include "../unitest.h"

int test_ft_calloc(void) {
    char *str;

    str = ft_calloc(10, sizeof(char));
    if (str == NULL)
        return (0);
    for (int i = 0; i < 10; i++) {
        if (str[i] != '\0') {
            free(str);
            return (0);
        }
    }
    free(str);
    str = ft_calloc(0, sizeof(char));
    if (str == NULL)
        return (0);
    free(str);
    str = ft_calloc(10, 0);
    if (str == NULL)
        return (0);
    free(str);
    str = ft_calloc(0, 0);
    if (str == NULL)
        return (0);
    free(str);
    str = ft_calloc(100, sizeof(char));
    if (str == NULL)
        return (0);
    for (int i = 0; i < 100; i++) {
        if (str[i] != '\0') {
            free(str);
            return (0);
        }
    }
    free(str);
    return (1);
}