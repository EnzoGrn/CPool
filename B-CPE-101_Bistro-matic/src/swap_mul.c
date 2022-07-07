/*
** EPITECH PROJECT, 2021
** swap_mul.c
** File description:
** swap in mul (like a swap)
*/

#include "../include/my.h"

char *str_min_mul(char *v1, char *v2)
{
    return (my_strcmp(v1, v2) < 0 ? v1 : v2);
}

char *str_max_mul(char *v1, char *v2)
{
    return (my_strcmp(v1, v2) >= 0 ? v1 : v2);
}

int swap_mul(char **str1, char **str2)
{
    char *str_tmp = *str1;

    *str1 = str_max_mul(*str1, *str2);
    *str2 = str_min_mul(str_tmp, *str2);
    return 0;
}
