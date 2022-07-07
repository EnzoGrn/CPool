/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main of program
*/

#include <unistd.h>
#include "../include/bistromatic.h"
#include "../include/error.h"
#include "../include/eval_expr.h"
#include "../include/my.h"

static void print_usage()
{
    my_putstr("USAGE\n");
    my_putstr("./calc [BASE] [OPERATORS] [SIZE_READ]\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("- [BASE]: all the symbols of the base\n");
    my_putstr("- [OPERATORS]: the symbols for the parentheses\
    and the 5 operators\n");
    my_putstr("- [SIZE_READ]: number of characters to be read\n");
}

char *get_expr(unsigned int size)
{
    char *expr;

    if (size <= 0) {
        write(2, "syntax error", 12);
        exit(EXIT_SIZE_NEG);
    }
    expr = malloc(size + 1);
    if (expr == 0) {
        write(2, "syntax error", 12);
        exit(EXIT_MALLOC);
    }
    if (read(0, expr, size) != size) {
        write(2, "syntax error", 12);
        exit(EXIT_READ);
    }
    expr[size] = 0;
    return (expr);
}

int main(int argc, char **argv)
{
    unsigned int size;
    char *expr;
    char *base;
    char *operators;

    if ((argc == 2 && my_strcmp(argv[1], "-h") == 0) || argc != 4) {
        print_usage();
        return (1);
    }
    check_arg(argc, argv);
    size = my_getnbr(argv[LEN]);
    expr = get_expr(size);
    base = argv[BASE];
    operators = argv[OPE];
    replace_operators(expr, operators, size);
    unmatched_par(expr);
    invalid_expr(expr, base);
    my_putstr(eval_expr(expr, base));
    return (EXIT_SUCCESS);
}
