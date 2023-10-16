//
// Created by Julie on 15/10/2023.
//

#include "../unitest.h"

int test_ft_strlcat(void) {
    char *str;

    str = (char *)malloc(sizeof(char) * 15);
    //ft_putnbr_fd(ft_strlcat(str, "Comment", 15), 1);
    //ft_putstr_fd("\n", 1);
    //ft_putstr_fd(str, 1);
    if (ft_strcmp(str, "Comment tu") != 0) {
        free(str);
        return (0);
    }
    free(str);
    return (1);
}