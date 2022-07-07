/*
** EPITECH PROJECT, 2021
** operators.c
** File description:
** list of operators
*/

#ifndef OPERATIONS_H
    #define OPERATIONS_H

int add(int nb_1, int nb_2);
int sub(int nb_1, int nb_2);
int mul(int nb_1, int nb_2);
int mod(int nb_1, int nb_2);
int divide(int nb_1, int nb_2);

struct operations {
    char sign;
    int (*fn)(int, int);
};

const struct operations OPERATORS_FUNCS[] = {
    {'-', &sub},
    {'+', &add},
    {'/', &divide},
    {'*', &mul},
    {'%', &mod}
};

#endif
