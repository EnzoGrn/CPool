/*
** EPITECH PROJECT, 2021
** Eval Expr
** File description:
** Replace calculated value
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/eval_expr.h"

static int get_int_length(int value)
{
    int negative = value < 0 ? 1 : 0;
    int length = 0;

    if (value == 0)
        return 1;
    if (negative)
        value *= -1;
    while (value) {
        length++;
        value /= 10;
    }
    return (negative ? length + 1 : length);
}

static char *int_to_str(int value)
{
    int int_len = get_int_length(value);
    int reverse = value < 0 ? 1 : 0;
    char *str = malloc(sizeof(char) * (int_len + 2));
    int i = 0;

    if (value == 0)
        return "0";
    if (value < 0)
        value *= -1;
    while (value) {
        str[i] = (value % 10) + 48;
        value /= 10;
        i++;
    }
    if (reverse) {
        str[i] = '-';
        str[i + 1] = '\0';
    } else {
        str[i] = '\0';
    }
    return my_revstr(str);
}

void replace(char ***str, int open, int result)
{
    int length = get_array_length(*str);
    char **new = malloc(sizeof(char *) * (length - 1));
    char *result_str = int_to_str(result);
    int i = 0;
    int j = 0;

    new[length - 2] = NULL;
    for ( ; i < open; i++)
        new[i] = (*str)[i];
    new[i] = result_str;
    j = i + 1;
    for (i = j + 2; i < length; i++, j++)
        new[j] = (*str)[i];
    *str = new;
}
