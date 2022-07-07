/*
** EPITECH PROJECT, 2021
** Eval Expr
** File description:
** Get array length
*/

#include <stdlib.h>

int get_array_length(char **str)
{
    int length = 0;

    for ( ; str[length] != NULL; length++);
    return length;
}
