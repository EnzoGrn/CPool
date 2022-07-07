/*
** EPITECH PROJECT, 2021
** reverse_polish_helpers.c
** File description:
** Helpers function for reverse polish notation function
*/

#include "include/my.h"
#include "include/eval_expr.h"

void push_ope(strings_t *strings, pos_t *pos)
{
    int i = my_strlen(strings->ope) - 1;

    while (i >= 0) {
        if ((strings->ope)[i] == '(') {
            (strings->ope)[i] = 0;
            i--;
        } else {
            (strings->out)[(pos->out)] = (strings->ope)[i];
            (strings->out)[(pos->out) + 1] = ' ';
            (strings->ope)[i] = 0;
            (pos->out) += 2;
            i--;
        }
    }
}

int push_ope_par(strings_t *strings, pos_t *pos)
{
    int i = my_strlen(strings->ope) - 1;
    int rem_ope = 0;

    while ((strings->ope)[i] != '(') {
        (strings->out)[(pos->out)] = (strings->ope)[i];
        (strings->out)[(pos->out) + 1] = ' ';
        (strings->ope)[i] = 0;
        (pos->out) += 2;
        i--;
        rem_ope++;
    }
    return rem_ope;
}

static void append_inverter(strings_t *strings, pos_t *pos, char token)
{
    (strings->out)[(pos->out)] = (strings->str)[(pos->str) + 1];
    (strings->out)[(pos->out) + 1] = '1';
    (strings->out)[(pos->out) + 2] = ' ';
    (strings->ope)[(pos->ope)] = '*';
    (strings->ope)[(pos->ope) + 1] = token;
    (pos->out) += 3;
    (pos->str)++;
    (pos->ope) += 2;
}

void ope_prio(strings_t *strings, pos_t *pos)
{
    char token = (strings->str)[(pos->str)];

    if ((strings->str)[(pos->str) + 1] == '-') {
        append_inverter(strings, pos, token);
        return;
    }
    while (is_num((strings->str)[(pos->str) + 1])) {
        (strings->out)[(pos->out)] = (strings->str)[(pos->str) + 1];
        (pos->out)++;
        (pos->str)++;
    }
    (strings->out)[(pos->out)] = ' ';
    (strings->out)[(pos->out) + 1] = token;
    (strings->out)[(pos->out) + 2] = ' ';
    (pos->out) += 3;
}
