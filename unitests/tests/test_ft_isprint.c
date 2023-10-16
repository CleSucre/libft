//
// Created by Julie on 15/10/2023.
//

#include "../unitest.h"

int test_ft_isprint(void) {
    int i;

    i = 0;
    while (i < 32) {
        if (ft_isprint(i))
            return (0);
        i++;
    }
    while (i < 127) {
        if (!ft_isprint(i))
            return (0);
        i++;
    }
    while (i < 257) {
        if (ft_isprint(i))
            return (0);
        i++;
    }
    return (1);
}