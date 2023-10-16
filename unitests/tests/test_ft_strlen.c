//
// Created by Julie on 15/10/2023.
//

#include "../unitest.h"

int test_ft_strlen(void)
{
    if (ft_strlen("Hello") != 5)
        return (0);
    if (ft_strlen("") != 0)
        return (0);
    if (ft_strlen("Hello World!") != 12)
        return (0);
    return (1);
}