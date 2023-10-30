//
// Created by Julie on 30/10/2023.
//

#include "../unitest.h"

int test_ft_memchr(void) {
    char *str = "Hello World!";

    if (ft_memcmp(ft_memchr(str, 'H', 12), "Hello World!", 12) != 0)
        return (0);
    if (ft_memcmp(ft_memchr(str, 'e', 12), "ello World!", 11) != 0)
        return (0);
    if (ft_memcmp(ft_memchr(str, '!', 12), "!", 1) != 0)
        return (0);
    if (ft_memchr(str, 'z', 12) != NULL)
        return (0);
    if (ft_memchr(str, 'H', 0) != NULL)
        return (0);
    if (ft_memchr(str, 'W', 5) != NULL)
        return (0);
    if (ft_memcmp(ft_memchr(str, 'o', 5), "o World!", 7) != 0)
        return (0);
    return (1);
}