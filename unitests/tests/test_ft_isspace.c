//
// Created by Julie on 15/10/2023.
//

#include "../unitest.h"

int test_ft_isspace(void) {
    char    c;

    c = 9;
    while (c <= 13) {
        if (!ft_isspace(c))
            return (0);
        c++;
    }
    while (c < 32) {
        if (ft_isspace(c))
            return (0);
        c++;
    }
    if (!ft_isspace(c))
        return (0);
    return (1);
}