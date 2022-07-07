/*
** EPITECH PROJECT, 2021
** operators.c
** File description:
** list of operators
*/

#include "../include/bistromatic.h"
#include "../include/infin_add.h"

char *add(char *nb_1, char *nb_2, char *base)
{
    if (is_single_neg_num(nb_1, nb_2))
        return substraction(nb_1, nb_2, base);
    return addition(nb_1, nb_2, 0, base);
}

char *sub(char *nb_1, char *nb_2, char *base)
{
    if (is_single_neg_num(nb_1, nb_2)) {
        if (nb_2[0] == '-')
            return addition(nb_1, nb_2, 0, base);
        else
            return addition(nb_1, nb_2, 1, base);
    }
    return substraction(nb_1, nb_2, base);
}

char *mul(char *nb_1, char *nb_2, char *base)
{
    return infin_mul(nb_1, nb_2, base);
}

char *divide(char *nb_1, char *nb_2, char *base)
{
    return infin_div(nb_1, nb_2, base);
}

char *mod(char *nb_1, char *nb_2, char *base)
{
    return infin_mod(nb_1, nb_2, base);
}
