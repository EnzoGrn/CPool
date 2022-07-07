/*
** EPITECH PROJECT, 2021
** operators.c
** File description:
** list of operators
*/

#ifndef OPERATIONS_H
    #define OPERATIONS_H

char *add(char *nb_1, char *nb_2, char *base);
char *sub(char *nb_1, char *nb_2, char *base);
char *mul(char *nb_1, char *nb_2, char *base);
char *mod(char *nb_1, char *nb_2, char *base);
char *divide(char *nb_1, char *nb_2, char *base);

struct operations {
    char sign;
    char *(*fn)(char *, char *, char *);
};

const struct operations OPERATORS_FUNCS[] = {
    {'-', &sub},
    {'+', &add},
    {'/', &divide},
    {'*', &mul},
    {'%', &mod}
};

#endif
