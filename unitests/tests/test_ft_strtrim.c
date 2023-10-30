//
// Created by Julie on 30/10/2023.
//

#include "../unitest.h"

int test_ft_strtrim(void)
{
    if (ft_strcmp(ft_strtrim(" x x  x Hello world !   xxx   ", " x"), "Hello world !") != 0)
        return (0);
    if (ft_strcmp(ft_strtrim(" x x  x Hello world !   xxx   ", " "), "x x  x Hello world !   xxx") != 0)
        return (0);
    if (ft_strcmp(ft_strtrim("xxxxx x x  x Hello world !  x xxx", "x"), " x x  x Hello world !  x ") != 0)
        return (0);
    if (ft_strcmp(ft_strtrim("       ", " "), "") != 0)
        return (0);
    if (ft_strcmp(ft_strtrim("", " "), "") != 0)
        return (0);
    if (ft_strcmp(ft_strtrim("Hello world !", " "), "Hello world !") != 0)
        return (0);
    if (ft_strcmp(ft_strtrim("Hello world !", ""), "Hello world !") != 0)
        return (0);
    if (ft_strcmp(ft_strtrim("Hello world !", "H"), "ello world !") != 0)
        return (0);
    return (1);
}
