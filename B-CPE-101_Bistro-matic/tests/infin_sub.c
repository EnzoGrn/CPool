/*
** EPITECH PROJECT, 2021
** infin_sub.c
** File description:
** infin sub unit tests
*/

#include <criterion/criterion.h>
#include <stdio.h>

char *eval_expr(char const *expr, char *base);
int get_array_length(char *str);

Test(eval_expr, substraction)
{
    char *expr = "2-1";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "1";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, sub_negative)
{
    char *expr = "1-2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "-1";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, sub_with_carry)
{
    char *expr = "10-1";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "9";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, sub_with_two_negative)
{
    char *expr = "-12-3";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "-15";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, negative_carry)
{
    char *expr = "1-100";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "-99";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, consecutive_negative)
{
    char *expr = "12--16";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "28";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, sub_with_big)
{
    char *expr = "1-99999999999999999999999999999999999999999999999999999999999";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "-99999999999999999999999999999999999999999999999999999999998";

    cr_expect_str_eq(res, expected);
}
