//
// Created by Julie on 15/10/2023.
//

#include "../unitest.h"

int test_ft_isalpha(void) {
    char    c;

    c = 'a';
    while (c <= 'z') {
        if (!ft_isalpha(c))
            return (0);
        c++;
    }
    c = 'A';
    while (c <= 'Z') {
        if (!ft_isalpha(c))
            return (0);
        c++;
    }
    c = '0';
    while (c <= '9') {
        if (ft_isalpha(c))
            return (0);
        c++;
    }
    if (ft_isalpha(' ') || ft_isalpha('\n') || ft_isalpha('\t'))
        return (0);
    return (1);
}