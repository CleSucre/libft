//
// Created by Julie on 15/10/2023.
//

#include "../unitest.h"

int test_ft_tolower(void) {
    char upper;
    char lower;

    upper = 'A';
    lower = 'a';
    while (upper <= 'Z') {
        if (ft_tolower(upper) != lower)
            return (0);
        upper++;
        lower++;
    }
    if (ft_tolower(' ') != ' ' || ft_tolower('\n') != '\n' || ft_tolower('\t') != '\t')
        return (0);
    if (ft_tolower('0') != '0' || ft_tolower('9') != '9')
        return (0);
    return (1);
}