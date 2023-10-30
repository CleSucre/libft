//
// Created by Julie on 30/10/2023.
//

#include "../unitest.h"

int test_ft_strnstr(void)
{
    if (ft_strcmp(ft_strnstr("Hello World !", "World", 12), "World !") != 0)
        return (0);
    if (ft_strcmp(ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 20), "ipsum dolor sit amet") != 0)
        return (0);
    if (ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 5) != NULL)
        return (0);
    if (ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 1) != NULL)
        return (0);
    if (ft_strcmp(ft_strnstr("lorem ipsum dolor sit amet", "", 10), "lorem ipsum dolor sit amet") != 0)
        return (0);
    if (ft_strcmp(ft_strnstr("", "", 10), "") != 0)
        return (0);
    if (ft_strnstr("", "ipsum", 10) != NULL)
        return (0);
    if (ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 0) != NULL)
        return (0);
    if (ft_strcmp(ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 100), "ipsum dolor sit amet") != 0)
        return (0);
    if (ft_strnstr("Hello, World!", "o, W", 5) != NULL)
        return (0);
    return (1);
}
