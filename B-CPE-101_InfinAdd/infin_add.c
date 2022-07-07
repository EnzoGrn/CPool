/*
** EPITECH PROJECT, 2021
** infin_add.c
** File description:
** infinite addition
*/

#include "include/my.h"

int manage_error(int ac, char **av)
{
    if (ac < 3 || ac > 3)
        return (1);
    if (my_str_isnum(av[1]) != 0)
        return (1);
    if (my_str_isnum(av[2]) != 0)
        return (1);
}

char negative_verify(char *value)
{
    char minus = '0';

    if (value[0] == '-') {
        minus = '-';
    }
    return (minus);
}

int main(int argc, char **argv)
{
    char neg_1 = negative_verify(argv[1]);
    char neg_2 = negative_verify(argv[2]);

    if (manage_error(argc, argv) == 1)
        return (84);
    if (neg_1 == neg_2) {
        clear(&argv[1], &argv[2]);
        calcul_add(argv[1], argv[2], neg_1);
    } else {
        clear(&argv[1], &argv[2]);
        calcul_sub(argv[1], argv[2], neg_1, neg_2);
    }
    return (0);
}
