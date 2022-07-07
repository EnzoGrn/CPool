/*
** EPITECH PROJECT, 2021
** write_polish.c
** File description:
** functions who displays output in rev_polish_not.c
*/

#include "include/eval_expr.h"

void neg_number(strings_t *strings, pos_t *pos)
{
    (strings->out)[(pos->out)] = (strings->str)[(pos->str)];
    (pos->out)++;
    (pos->str)++;
}

void write_number(strings_t *strings, pos_t *pos)
{
    (strings->out)[(pos->out)] = (strings->str)[(pos->str)];
    if (!is_num((strings->str)[(pos->str) + 1])) {
        (strings->out)[(pos->out) + 1] = ' ';
        (pos->out) += 2;
    } else
        (pos->out)++;
}

void write_operator(strings_t *strings, pos_t *pos)
{
    (strings->ope)[(pos->ope)] = (strings->str)[(pos->str)];
    (pos->ope)++;
}
