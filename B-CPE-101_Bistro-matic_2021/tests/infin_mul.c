/*
** EPITECH PROJECT, 2021
** infin_mul
** File description:
** Infinite multiplication unit tests
*/

#include <criterion/criterion.h>
#include <stdio.h>

char *eval_expr(char const *expr, char *base);
int get_array_length(char *str);

Test(eval_expr, basic_mul)
{
    char *expr = "1*2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "2";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, basic_mul_tenth)
{
    char *expr = "10*2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "20";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, basic_div_both_negative)
{
    char *expr = "-4*-2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "8";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, basic_mul_second_negative)
{
    char *expr = "4*-2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "-8";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, basic_mul_first_negative)
{
    char *expr = "-4*2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "-8";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, basic_mul_with_neg)
{
    char *expr = "5*-2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "-10";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, complex_mul_with_carry)
{
    char *expr = "999*8";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "7992";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, complex_mul_with_carry_one_negative)
{
    char *expr = "999*-8";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "-7992";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, complex_mul_with_carry_one_negative_par)
{
    char *expr = "(999*-8)";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "-7992";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, basic_mul_binary)
{
    char *expr = "10*11";
    char *base = "01";
    char *res = eval_expr(expr, base);
    char *expected = "110";

    cr_expect_str_eq(res, expected);
}
