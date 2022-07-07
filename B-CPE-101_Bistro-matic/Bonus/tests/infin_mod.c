/*
** EPITECH PROJECT, 2021
** infin_mod.c
** File description:
** infin mod unit tests
*/

#include <criterion/criterion.h>
#include <stdio.h>

char *eval_expr(char const *expr, char *base);
int get_array_length(char *str);

Test(eval_expr, modulo_zero)
{
    char *expr = "6%2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "0";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, modulo_one)
{
    char *expr = "18%7";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "1";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, modulo_one_neg)
{
    char *expr = "-18%7";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "-4";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, modulo_zero_neg)
{
    char *expr = "8%-2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "0";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, modulo_by_zero)
{
    char *expr = "5%0";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "syntax error";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, mod_two_neg)
{
    char *expr = "-10%-6";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "-4";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, big_modulo)
{
    char *expr = "99999999999999999999999999999999999999999999999999%22222222222222222222222222222222222222222222222222";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "11111111111111111111111111111111111111111111111111";

    cr_expect_str_eq(res, expected);
}
