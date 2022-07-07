/*
** EPITECH PROJECT, 2021
** Eval Expr
** File description:
** Evaluate expressions
*/

#include <stdlib.h>
#include <unistd.h>
#include "../include/my.h"
#include "../include/operations.h"
#include "../include/eval_expr.h"

static int is_number(char *str)
{
    if (my_strlen(str) == 1 && is_sign(str[0]))
        return 0;
    if (!is_sign(str[0]) || !(str[0] >= '0' && '9' >= str[0]))
        return 0;
    return my_str_isnum(str + 1);
}

static int is_single_sign(char **expr, int i)
{
    int is_current = is_number(expr[i]);
    int is_next = is_number(expr[i + 1]);
    int is_next2 = is_sign(expr[i + 2][0]);

    return (!is_current && !is_next && is_next2);
}

static int apply_operation(char ***expr, int i, char *base)
{
    char *val1;
    char *val2;

    for (int j = 0; j < 5; j++) {
        if (OPERATORS_FUNCS[j].sign == (*expr)[i + 2][0]) {
            val1 = (*expr)[i];
            val2 = (*expr)[i + 1];
            replace(expr, i, OPERATORS_FUNCS[j].fn(val1, val2, base));
            return 1;
        }
    }
    return 0;
}

static void calculation(char ***str, char *base)
{
    int length = get_array_length((*str));
    int stop = 1;

    if (!is_rpn_valid(str)) {
        write(1, "negative error", 14);
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i + 2 < length && stop; i++) {
        if (my_strlen((*str)[i + 2]) == 1 && is_single_sign(*str, i))
            stop = apply_operation(str, i, base) ? 0 : 1;
    }
    if (length != 1)
        calculation(str, base);
}

char *eval_expr(char const *expr, char *base)
{
    char **res = rev_polish_not(my_strdup(expr), base);
    char ***prn = &res;

    calculation(prn, base);
    return **prn;
}
