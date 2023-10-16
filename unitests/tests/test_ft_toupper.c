//
// Created by Julie on 15/10/2023.
//

#include "../unitest.h"

int test_ft_toupper(void) {
    char lower;
    char upper;

    lower = 'a';
    upper = 'A';
    while (lower <= 'z') {
        if (ft_toupper(lower) != upper)
            return (0);
        lower++;
        upper++;
    }
    if (ft_toupper(' ') != ' ' || ft_toupper('\n') != '\n' || ft_toupper('\t') != '\t')
        return (0);
    if (ft_toupper('0') != '0' || ft_toupper('9') != '9')
        return (0);
    return (1);
}