/*
** EPITECH PROJECT, 2021
** my_strswap.c
** File description:
** swaps two strings
*/

#include "my.h"

void my_strswap(char **value_1, char **value_2)
{
    char *swap = *value_1;
    *value_1 = max_value(*value_1, *value_2);
    *value_2 = min_value(swap, *value_2);
}
