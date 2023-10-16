//
// Created by Julie on 15/10/2023.
//

#include "../unitest.h"

int test_ft_bzero(void) {
    char    *str;
    int     len;
    int     i;

    str = ft_strdup("Hello World");
    len = 11;
    i = 0;
    ft_bzero(str, len);
    while (i < len) {
        if (str[i] != '\0')
            return (0);
        i++;
    }
    free(str);

    str = ft_strdup("Hello");
    len = 5;
    i = 0;
    ft_bzero(str, len);
    while (i < len) {
        if (str[i] != '\0')
            return (0);
        i++;
    }
    free(str);

    str = ft_strdup("This test is a success");
    len = 22;
    i = 0;
    ft_bzero(str, len - 10);
    while (i < len - 10) {
        if (str[i] != '\0')
            return (0);
        i++;
    }
    while (i < len) {
        if (str[i] == '\0')
            return (0);
        i++;
    }
    free(str);

    str = ft_strdup("This test is a fail?");
    len = 20;
    i = 0;
    ft_bzero(str, len - 15);
    while (i < len - 15) {
        if (str[i] != '\0')
            return (0);
        i++;
    }
    while (i < len) {
        if (str[i] == '\0')
            return (0);
        i++;
    }
    return (1);
}