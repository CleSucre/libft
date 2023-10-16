//
// Created by Julie on 15/10/2023.
//

#include "../unitest.h"

int test_ft_atoi(void) {
    if (ft_atoi("123") != 123)
        return (0);
    if (ft_atoi("-123") != -123)
        return (0);
    if (ft_atoi("0") != 0)
        return (0);
    if (ft_atoi("2147483647") != 2147483647)
        return (0);
    if (ft_atoi("-2147483648") != -2147483648)
        return (0);
    if (ft_atoi(" \n \t \r \v  123") != 123)
        return (0);
    if (ft_atoi(" \n \t \r \v  -123") != -123)
        return (0);
    if (ft_atoi(" \n \t \r \v  0") != 0)
        return (0);
    if (ft_atoi(" \n \t \r \v  2147483647") != 2147483647)
        return (0);
    if (ft_atoi(" \n \t \r \v  -2147483648") != -2147483648)
        return (0);
    if (ft_atoi(" \n \t \r \v  +123") != 123)
        return (0);
    if (ft_atoi(" \n \t \r \v  -123") != -123)
        return (0);
    if (ft_atoi(" \n \t \r \v  +0") != 0)
        return (0);
    if (ft_atoi(" \n \t \r \v  +2147483647") != 2147483647)
        return (0);
    if (ft_atoi(" \n \t \r \v  -2147483648") != -2147483648)
        return (0);
    return (1);
}