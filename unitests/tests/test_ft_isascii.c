//
// Created by Julie on 15/10/2023.
//

#include "../unitest.h"

int test_ft_isascii(void) {
    int i;

    i = -127;
    while (i < 0) {
        if (ft_isascii(i))
            return (0);
        i++;
    }
    i = 0;
    while (i < 128) {
        if (!ft_isascii(i))
            return (0);
        i++;
    }
    while (i < 257) {
        if (ft_isascii(i))
            return (0);
        i++;
    }
    return (1);
}