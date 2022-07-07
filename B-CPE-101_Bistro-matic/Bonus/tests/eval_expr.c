/*
** EPITECH PROJECT, 2021
** eval_expr
** File description:
** Eval expression unit tests
*/

#include <criterion/criterion.h>
#include <stdio.h>

char *eval_expr(char const *expr, char *base);
int get_array_length(char *str);

Test(eval_expr, basic_addition)
{
    char *expr = "1+2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "3";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, basic_substraction)
{
    char *expr = "1-2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "-1";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, basic_division)
{
    char *expr = "4/2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "2";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, basic_multiplication)
{
    char *expr = "4*2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "8";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, basic_modulo)
{
    char *expr = "5%2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "1";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, basic_multiplication_with_neg)
{
    char *expr = "5*-2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "-10";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, basic_substraction_with_neg)
{
    char *expr = "5--2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "7";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, basic_neg_before_parenthesis)
{
    char *expr = "5-(2)";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "3";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, complex_multiplication_with_neg_and_parenthesis)
{
    char *expr = "-10*(13/2)";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "-60";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, marvin_first_test)
{
    char *expr = "3+42*(1-2/7-1%21)+2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "5";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, marvin_eight_test)
{
    char *expr = "1+2*(-1-1*-(22+2*1)+1*-0)";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "47";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, marvin_eight_test_with_sub)
{
    char *expr = "1+2*(-1-1*-(22+2*1)+1*-0)-47";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "0";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, full_parenthesis)
{
    char *expr = "(((((((((8)))))))))";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "8";


    cr_expect_str_eq(res, expected);
}
