/*
** EPITECH PROJECT, 2021
** operators.c
** File description:
** list of operators
*/

int add(int nb_1, int nb_2, char *base)
{
    return (nb_1 + nb_2);
}

int sub(int nb_1, int nb_2, char *base)
{
    return (nb_1 - nb_2);
}

int mul(int nb_1, int nb_2, char *base)
{
    return (nb_1 * nb_2);
}

int divide(int nb_1, int nb_2, char *base)
{
    return (nb_1 / nb_2);
}

int mod(int nb_1, int nb_2, char *base)
{
    return (nb_1 % nb_2);
}
