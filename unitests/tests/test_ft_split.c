//
// Created by Julie on 15/10/2023.
//

#include "../unitest.h"

int test_ft_split(void) {
    char **tab;

    tab = ft_split("Hello World", ' ');
    if (ft_strcmp(tab[0], "Hello") != 0) {
        free(tab);
        return (0);
    }
    if (ft_strcmp(tab[1], "World") != 0) {
        free(tab);
        return (0);
    }
    if (tab[2]) {
        free(tab);
        return (0);
    }
    free(tab);
    tab = ft_split("____Hi_every_one_how_____you____doing______?_Im_doing_good__________", '_');
    if (ft_strcmp(tab[0], "Hi") != 0) {
        free(tab);
        return (0);
    }
    if (ft_strcmp(tab[1], "every") != 0) {
        free(tab);
        return (0);
    }
    if (ft_strcmp(tab[2], "one") != 0) {
        free(tab);
        return (0);
    }
    if (ft_strcmp(tab[3], "how") != 0) {
        free(tab);
        return (0);
    }
    if (ft_strcmp(tab[4], "you") != 0) {
        free(tab);
        return (0);
    }
    if (ft_strcmp(tab[5], "doing") != 0) {
        free(tab);
        return (0);
    }
    if (ft_strcmp(tab[6], "?") != 0) {
        free(tab);
        return (0);
    }
    if (ft_strcmp(tab[7], "Im") != 0) {
        free(tab);
        return (0);
    }
    if (ft_strcmp(tab[8], "doing") != 0) {
        free(tab);
        return (0);
    }
    if (ft_strcmp(tab[9], "good") != 0) {
        free(tab);
        return (0);
    }
    if (tab[10]) {
        free(tab);
        return (0);
    }
    free(tab);
    return (1);
}