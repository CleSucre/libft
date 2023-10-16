//
// Created by Julie on 15/10/2023.
//

#include "../unitest.h"

int test_ft_str_count_chars(void) {
if (ft_str_count_chars("Hello World", "lo") != 5)
        return (0);
    if (ft_str_count_chars("Hello World", "o") != 2)
        return (0);
    if (ft_str_count_chars("Hello World", "H") != 1)
        return (0);
    if (ft_str_count_chars("Hello World", "z") != 0)
        return (0);
    if (ft_str_count_chars("Hello World", " ") != 1)
        return (0);
    return (1);
}