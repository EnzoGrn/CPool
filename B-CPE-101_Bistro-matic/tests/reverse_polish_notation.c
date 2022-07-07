/*
** EPITECH PROJECT, 2021
** reverse_polish_notation.c
** File description:
** Reverse polish notation unit tests
*/

#include <criterion/criterion.h>
#include <stdbool.h>

char **rev_polish_not(char *str, char *base);
int get_array_length(char **str);

Test(rev_polish_not, basic_addition)
{
    char *expr = "1+2";
    char *base = "0123456789";
    char **res = rev_polish_not(expr, base);
    char *expected[4] = {"1", "2", "+", NULL};

    cr_assert_eq(get_array_length(res), get_array_length(expected));
    for (int i = 0; res[i]; i++)
        cr_assert_str_eq(res[i], expected[i]);
}

Test(rev_polish_not, basic_substraction)
{
    char *expr = "1-2";
    char *base = "0123456789";
    char **res = rev_polish_not(expr, base);
    char *expected[4] = {"1", "2", "-", NULL};

    cr_assert_eq(get_array_length(res), get_array_length(expected));
    for (int i = 0; res[i]; i++)
        cr_assert_str_eq(res[i], expected[i]);
}

Test(rev_polish_not, basic_division)
{
    char *expr = "4/2";
    char *base = "0123456789";
    char **res = rev_polish_not(expr, base);
    char *expected[4] = {"4", "2", "/", NULL};

    cr_assert_eq(get_array_length(res), get_array_length(expected));
    for (int i = 0; res[i]; i++)
        cr_assert_str_eq(res[i], expected[i]);
}

Test(rev_polish_not, basic_modulo)
{
    char *expr = "5%2";
    char *base = "0123456789";
    char **res = rev_polish_not(expr, base);
    char *expected[4] = {"5", "2", "%", NULL};

    cr_assert_eq(get_array_length(res), get_array_length(expected));
    for (int i = 0; res[i]; i++)
        cr_assert_str_eq(res[i], expected[i]);
}

Test(rev_polish_not, basic_multiplication_with_neg)
{
    char *expr = "5*-2";
    char *base = "0123456789";
    char **res = rev_polish_not(expr, base);
    char *expected[4] = {"5", "-2", "*", NULL};

    cr_assert_eq(get_array_length(res), get_array_length(expected));
    for (int i = 0; res[i]; i++)
        cr_assert_str_eq(res[i], expected[i]);
}

Test(rev_polish_not, basic_substraction_with_neg)
{
    char *expr = "5--2";
    char *base = "0123456789";
    char **res = rev_polish_not(expr, base);
    char *expected[4] = {"5", "-2", "-", NULL};

    cr_assert_eq(get_array_length(res), get_array_length(expected));
    for (int i = 0; res[i]; i++)
        cr_assert_str_eq(res[i], expected[i]);
}

Test(rev_polish_not, basic_neg_before_parenthesis)
{
    char *expr = "5-(2)";
    char *base = "0123456789";
    char **res = rev_polish_not(expr, base);
    char *expected[4] = {"5", "2", "-", NULL};

    cr_assert_eq(get_array_length(res), get_array_length(expected));
    for (int i = 0; res[i]; i++)
        cr_assert_str_eq(res[i], expected[i]);
}

Test(rev_polish_not, complex_multiplication_with_neg_and_parenthesis)
{
    char *expr = "-10*(13/2)";
    char *base = "0123456789";
    char **res = rev_polish_not(expr, base);
    char *expected[6] = {"-10", "13", "2", "/", "*", NULL};

    cr_assert_eq(get_array_length(res), get_array_length(expected));
    for (int i = 0; res[i]; i++)
        cr_assert_str_eq(res[i], expected[i]);
}

Test(rev_polish_not, marvin_first_test)
{
    char *expr = "3+42*(1-2/7-1%21)+2";
    char *base = "0123456789";
    char **res = rev_polish_not(expr, base);
    char *expected[17] = {"3", "42", "1", "2", "7", "/", "-", "1", "21", "%", "-", "*", "+", "2", "+", NULL};

    cr_assert_eq(get_array_length(res), get_array_length(expected));
    for (int i = 0; res[i]; i++)
        cr_assert_str_eq(res[i], expected[i]);
}

Test(rev_polish_not, marvin_eight_test)
{
    char *expr = "1+2*(-1-1*-(22+2*1)+1*-0)";
    char *base = "0123456789";
    char **res = rev_polish_not(expr, base);
    char *expected[20] = {"1", "2", "-1", "1", "22", "2", "1", "*", "+", "-1", "*", "*", "-", "1", "-0", "*", "+", "*", "+", NULL};

    cr_assert_eq(get_array_length(res), get_array_length(expected));
    for (int i = 0; res[i]; i++)
        cr_assert_str_eq(res[i], expected[i]);
}

Test(rev_polish_not, marvin_eight_test_with_sub)
{
    char *expr = "1+2*(-1-1*-(22+2*1)+1*-0)-47";
    char *base = "0123456789";
    char **res = rev_polish_not(expr, base);
    char *expected[22] = {"1", "2", "-1", "1", "22", "2", "1", "*", "+", "-1", "*", "*", "-", "1", "-0", "*", "+", "*", "+", "47", "-", NULL};

    cr_assert_eq(get_array_length(res), get_array_length(expected));
    for (int i = 0; res[i]; i++)
        cr_assert_str_eq(res[i], expected[i]);
}

Test(rev_polish_not, full_parenthesis)
{
    char *expr = "(((((((((8)))))))))";
    char *base = "0123456789";
    char **res = rev_polish_not(expr, base);
    char *expected[2] = {"8", NULL};

    cr_assert_eq(get_array_length(res), get_array_length(expected));
    for (int i = 0; res[i]; i++)
        cr_assert_str_eq(res[i], expected[i]);
}
