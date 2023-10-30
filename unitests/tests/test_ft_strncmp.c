//
// Created by Julie on 30/10/2023.
//

#include "../unitest.h"

int test_ft_strncmp(void) {
    if (ft_strncmp("Hello", "Hello", 5) != 0)
        return (0);
    if (ft_strncmp("Hello", "Hello World!", 5) != 0)
        return (0);
    if (ft_strncmp("Hello World!", "Hello", 5) != 0)
        return (0);
    if (ft_strncmp("Hello", "", 5) != 72)
        return (0);
    if (ft_strncmp("", "Hello", 5) != -72)
        return (0);
    if (ft_strncmp("", "", 5) != 0)
        return (0);
    if (ft_strncmp("Hello", "Hello World!", 12) != -32)
        return (0);
    if (ft_strncmp("Hello World!", "Hello", 12) != 32)
        return (0);
    if (ft_strncmp("Hello", "", 12) != 72)
        return (0);
    if (ft_strncmp("", "Hello", 12) != -72)
        return (0);
    if (ft_strncmp("Hello", "Hello", 0) != 0)
        return (0);
    return (1);
}