//
// Created by Julie on 15/10/2023.
//

#include "../unitest.h"

int test_ft_isdigit(void) {
    char    c;

    c = '0';
    while (c <= '9') {
        if (!ft_isdigit(c))
            return (0);
        c++;
    }
    while (c <= 'z') {
        if (ft_isdigit(c))
            return (0);
        c++;
    }
    return (1);
}