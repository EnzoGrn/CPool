/*
** EPITECH PROJECT, 2021
** reverse_polish_notation.c
** File description:
** Reverse polish notation unit tests
*/

#include <criterion/criterion.h>
#include <stdbool.h>

char **rev_polish_not(char *str);
int get_array_length(char **str);

Test(rev_polish_not, basic_addition)
{
    char *expr = "1+2";
    char **res = rev_polish_not(expr);
    char *expected[4] = {"1", "2", "+", NULL};

    cr_assert_eq(get_array_length(res), get_array_length(expected));
    for (int i = 0; res[i]; i++)
        cr_assert_str_eq(res[i], expected[i]);
}

Test(rev_polish_not, basic_substraction)
{
    char *expr = "1-2";
    char **res = rev_polish_not(expr);
    char *expected[4] = {"1", "2", "-", NULL};

    cr_assert_eq(get_array_length(res), get_array_length(expected));
    for (int i = 0; res[i]; i++)
        cr_assert_str_eq(res[i], expected[i]);
}

Test(rev_polish_not, basic_division)
{
    char *expr = "4/2";
    char **res = rev_polish_not(expr);
    char *expected[4] = {"4", "2", "/", NULL};

    cr_assert_eq(get_array_length(res), get_array_length(expected));
    for (int i = 0; res[i]; i++)
        cr_assert_str_eq(res[i], expected[i]);
}

Test(rev_polish_not, basic_multiplication)
{
    char *expr = "4*2";
    char **res = rev_polish_not(expr);
    char *expected[4] = {"4", "2", "*", NULL};

    cr_assert_eq(get_array_length(res), get_array_length(expected));
    for (int i = 0; res[i]; i++)
        cr_assert_str_eq(res[i], expected[i]);
}

Test(rev_polish_not, basic_modulo)
{
    char *expr = "5%2";
    char **res = rev_polish_not(expr);
    char *expected[4] = {"5", "2", "%", NULL};

    cr_assert_eq(get_array_length(res), get_array_length(expected));
    for (int i = 0; res[i]; i++)
        cr_assert_str_eq(res[i], expected[i]);
}

Test(rev_polish_not, basic_multiplication_with_neg)
{
    char *expr = "5*-2";
    char **res = rev_polish_not(expr);
    char *expected[6] = {"5", "-1", "2", "*", "*", NULL};

    cr_assert_eq(get_array_length(res), get_array_length(expected));
    for (int i = 0; res[i]; i++)
        cr_assert_str_eq(res[i], expected[i]);
}

Test(rev_polish_not, basic_substraction_with_neg)
{
    char *expr = "5--2";
    char **res = rev_polish_not(expr);
    char *expected[4] = {"5", "-2", "-", NULL};

    cr_assert_eq(get_array_length(res), get_array_length(expected));
    for (int i = 0; res[i]; i++)
        cr_assert_str_eq(res[i], expected[i]);
}

Test(rev_polish_not, basic_neg_before_parenthesis)
{
    char *expr = "5-(2)";
    char **res = rev_polish_not(expr);
    char *expected[4] = {"5", "2", "-", NULL};

    cr_assert_eq(get_array_length(res), get_array_length(expected));
    for (int i = 0; res[i]; i++)
        cr_assert_str_eq(res[i], expected[i]);
}

Test(rev_polish_not, complex_multiplication_with_neg_and_parenthesis)
{
    char *expr = "-10*(13/2)";
    char **res = rev_polish_not(expr);
    char *expected[6] = {"-10", "13", "2", "/", "*", NULL};

    cr_assert_eq(get_array_length(res), get_array_length(expected));
    for (int i = 0; res[i]; i++)
        cr_assert_str_eq(res[i], expected[i]);
}
