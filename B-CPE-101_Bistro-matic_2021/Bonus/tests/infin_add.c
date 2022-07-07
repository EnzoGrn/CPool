/*
** EPITECH PROJECT, 2021
** infin_add
** File description:
** Infinite addition unit tests
*/

#include <criterion/criterion.h>
#include <stdio.h>

char *eval_expr(char const *expr, char *base);
int get_array_length(char *str);

Test(eval_expr, basic_add)
{
    char *expr = "1+2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "3";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, basic_add_tenth)
{
    char *expr = "10+2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "12";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, basic_add_both_negative)
{
    char *expr = "-4+-2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "-6";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, basic_add_second_negative)
{
    char *expr = "4+-2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "2";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, basic_add_first_negative)
{
    char *expr = "-4+2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "-2";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, basic_add_with_neg)
{
    char *expr = "5+-2";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "3";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, complex_add_with_carry)
{
    char *expr = "999+8";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "1007";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, complex_add_with_carry_one_negative)
{
    char *expr = "999+-8";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "991";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, complex_add_with_carry_one_negative_par)
{
    char *expr = "(999+-8)";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "991";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, basic_add_binary)
{
    char *expr = "10+11";
    char *base = "01";
    char *res = eval_expr(expr, base);
    char *expected = "101";

    cr_expect_str_eq(res, expected);
}

Test(eval_expr, basic_add_big)
{
    char *expr = "936352738262436482683632521667347261573+7367636761276372637";
    char *base = "0123456789";
    char *res = eval_expr(expr, base);
    char *expected = "936352738262436482691000158428623634210";

    cr_expect_str_eq(res, expected);
}
