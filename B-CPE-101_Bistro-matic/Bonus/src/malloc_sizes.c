/*
** EPITECH PROJECT, 2021
** reverse_polish_notation.c
** File description:
** return the string in the reverse polish notation
*/

#include "../include/my.h"
#include "../include/eval_expr.h"

static int is_parenthesis(char c)
{
    return (c == '(' || c == ')');
}

int get_sign_amount(char *str)
{
    int length = 0;
    int c = 0;

    for (int i = 0; i < my_strlen(str); i++) {
        c = str[i];
        if (is_sign(c) || is_parenthesis(c))
            length++;
    }
    return length;
}
