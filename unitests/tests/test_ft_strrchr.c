//
// Created by Julie on 30/10/2023.
//

#include "../unitest.h"

int test_ft_strrchr(void)
{
    if (ft_strcmp(ft_strrchr("Hello World !", 'o'), "orld !") != 0)
        return (0);
    if (ft_strcmp(ft_strrchr("lorem ipsum dolor sit amet", 'i'), "it amet") != 0)
        return (0);
    if (ft_strrchr("lorem ipsum dolor sit amet", 'z') != NULL)
        return (0);
    if (ft_strcmp(ft_strrchr("lorem ipsum dolor sit amet", 'l'), "lor sit amet") != 0)
        return (0);
    if (ft_strcmp(ft_strrchr("lorem ipsum dolor sit amet", 't'), "t") != 0)
        return (0);
    if (ft_strcmp(ft_strrchr("lorem ipsum dolor sit amet", 0), "") != 0)
        return (0);
    if (ft_strcmp(ft_strrchr("", 0), "") != 0)
        return (0);
    if (ft_strrchr("", 'o') != NULL)
        return (0);
    if (ft_strcmp(ft_strrchr("lorem ipsum dolor sit amet", 'd'), "dolor sit amet") != 0)
        return (0);
    return (1);
}
