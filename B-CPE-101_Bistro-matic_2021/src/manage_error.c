/*
** EPITECH PROJECT, 2021
** manage_error.c
** File description:
** manage errors of the bistromatic
*/

#include <unistd.h>
#include "../include/eval_expr.h"
#include "../include/error.h"
#include "../include/my.h"

int check_arg(int argc, char **argv)
{
    if (my_strlen(argv[OPE]) != 7 || idem(argv[OPE])) {
        write(2, "syntax error", 12);
        exit(EXIT_OPE);
    }
    if (argc != 4) {
        write(2, "syntax error", 12);
        exit(EXIT_ARG);
    }
    if (my_strlen(argv[BASE]) < 2 || idem(argv[BASE])) {
        write(2, "syntax error", 12);
        exit(EXIT_BASE);
    }
}

int compare(char const *expr, int i, int j)
{
    if (expr[i] == expr[j] && i != j) {
        write(2, "syntax error", 12);
        exit(EXIT_BASE);
    }
}

int idem(char *expr)
{
    for (int i = 0; expr[i] != 0; i++) {
        for (int j = 0; expr[j] != 0; j++) {
            compare(expr, i, j);
        }
    }
}

int unmatched_par(char *expr)
{
    int open_par = 0;
    int close_par = 0;

    for (int i = 0; i < my_strlen(expr); i++) {
        if (close_par > open_par)
            break;
        if (expr[i] == '(')
            open_par++;
        else if (expr[i] == ')')
            close_par++;
    }
    if (close_par != open_par) {
        write(2, "syntax error", 12);
        exit(EXIT_PAR);
    }
}

int invalid_expr(char *expr, char *base)
{
    char pos;
    char next;

    for (int i = 0; i < my_strlen(expr); i++) {
        pos = expr[i];
        next = expr[i + 1];
        if ((is_prio(pos) && is_prio(next)) ||
            ( is_ope(pos) && is_prio(next))) {

            write(2, "syntax error", 12);
            exit(EXIT_EXPR_INV);
        }
        if (!is_num(pos, base) && !is_sign_with_par(pos)) {
            write(2, "syntax error", 12);
            exit(EXIT_EXPR_INV);
        }
    }
}
