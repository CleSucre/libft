//
// Created by Julie on 15/10/2023.
//

#include "../unitest.h"

int test_ft_nbrlen(void) {
    int nbr;
    int multiplier;

    nbr = 0;
    multiplier = 1;
    while (nbr < nbr * 100000000) {
        if (ft_nbrlen(nbr) != multiplier)
            return (0);
        multiplier++;
        nbr *= 10;
    }
    if (ft_nbrlen(1536) != 4)
        return (0);
    return (1);
}