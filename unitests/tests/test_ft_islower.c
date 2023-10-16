//
// Created by Julie on 15/10/2023.
//

#include "../unitest.h"

int test_ft_islower(void) {
    char    c;

    c = 'a';
    while (c <= 'z') {
        if (!ft_islower(c))
            return (0);
        c++;
    }
    c = 'A';
    while (c <= 'Z') {
        if (ft_islower(c))
            return (0);
        c++;
    }
    c = '0';
    while (c <= '9') {
        if (ft_islower(c))
            return (0);
        c++;
    }
    if (ft_islower(' ') || ft_islower('\n') || ft_islower('\t'))
        return (0);
    return (1);
}