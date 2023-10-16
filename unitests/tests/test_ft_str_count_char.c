//
// Created by Julie on 15/10/2023.
//

#include "../unitest.h"

int test_ft_str_count_char(void) {
    if (ft_str_count_char("Hello World", 'l') != 3)
        return (0);
    if (ft_str_count_char("Hello World", 'o') != 2)
        return (0);
    if (ft_str_count_char("Hello World", 'H') != 1)
        return (0);
    if (ft_str_count_char("Hello World", 'z') != 0)
        return (0);
    if (ft_str_count_char("Hello World", ' ') != 1)
        return (0);
    return (1);
}