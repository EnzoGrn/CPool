/*
** EPITECH PROJECT, 2021
** infin_div.c
** File description:
** infin div unit tests
*/

#include <criterion/criterion.h>
#include <stdio.h>

char *eval_expr(char const *expr, char *base);
int get_array_length(char *str);

Test(eval_expr, division)
{
    char *expr = "2/1";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "2";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, division_by_zero)
{
    char *expr = "2/0";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "syntax error";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, div_negative)
{
    char *expr = "4/-2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "-2";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, div_two_negative)
{
    char *expr = "-4/-2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "2";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, div_with_carry)
{
    char *expr = "100/10";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "10";

    cr_expect_str_eq(res, expected);
}
