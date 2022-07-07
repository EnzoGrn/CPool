/*
** EPITECH PROJECT, 2021
** reverse_polish_notation.c
** File description:
** return the string in the reverse polish notation
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/eval_expr.h"

void update_simple_operator(strings_t *strings, pos_t *pos)
{
    (strings->ope)[pos->ope] = (strings->str)[pos->str];
    (pos->ope)++;
}

void reset(pos_t *pos, int *in_par)
{
    pos->ope = 0;
    (*in_par) = 0;
}

void elsa(strings_t *strings, pos_t *pos, int *in_par)
{
    if (priority((strings->str)[pos->str]) == 1
    && (strings->str)[pos->str + 1] != '(') {
        ope_prio(strings, pos);
        if ((*in_par) == 1)
            pos->ope -= push_ope_par(strings, pos);
    } else if (priority((strings->str)[pos->str]) == 1
    && (strings->str)[pos->str + 1] == '(')
        write_operator(strings, pos);
    else
        write_number(strings, pos);
}

void enter_parenthesis(strings_t *strings, pos_t *pos, int *in_par)
{
    if ((strings->str)[pos->str] == '(') {
        update_simple_operator(strings, pos);
        (*in_par) = 1;
    } else
        elsa(strings, pos, in_par);
}

char **rev_polish_not(char *str)
{
    strings_t strings = {malloc(sizeof(char) * (my_strlen(str) * 2)),
        malloc(sizeof(char) * get_sign_amount(str)), str};
    pos_t pos = {0, 0, 0};
    int in_par = 0;

    for (; pos.str < my_strlen(str); pos.str++) {
        if (str[pos.str] == '-' && (is_num(str[pos.str - 1]) != 1
        && str[pos.str - 1] != ')'))
            neg_number(&strings, &pos);
        if (str[pos.str] == ')') {
            push_ope(&strings, &pos);
            reset(&pos, &in_par);
        } else if (is_ope(str[pos.str]) == 1)
            update_simple_operator(&strings, &pos);
        else
            enter_parenthesis(&strings, &pos, &in_par);
    }
    push_ope(&strings, &pos);
    (strings.out)[pos.out - 1] = 0;
    return expr_to_array(strings.out);
}
