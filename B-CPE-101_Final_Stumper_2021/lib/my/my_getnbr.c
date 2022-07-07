/*
** EPITECH PROJECT, 2021
** my_putnbr
** File description:
** Display a number from given string
*/

#include <stdio.h>

static int is_num(char c)
{
    return (c >= '0' && c <= '9');
}

static int is_neg(char const *str)
{
    int neg = 0;
    int i = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            neg++;
        i++;
    }
    if (neg % 2 == 0)
        return 1;
    else
        return -1;
}

static int digit_operation(char const *str, int i, long *nb, int *count)
{
    const long max = 2147483648;
    int is_overflow_p = 0;
    int is_overflow_n = 0;
    int neg = 1;

    if (str[0] == '+' || str[0] == '-')
        neg = is_neg(str);
    if (str[i] >= '0' && str[i] <= '9') {
        (*count)++;
        *nb = *nb + (str[i] - 48);
        is_overflow_n = ((*nb) > max && neg == 1);
        is_overflow_p = ((*nb) > max - 1 && neg == -1);
        if ((*count) > 10 || is_overflow_p || is_overflow_n)
            return 0;
        else if (is_num(str[i + 1]))
            (*nb) *= 10;
    }
    return 1;
}

int my_getnbr(char const *str)
{
    int i = 0;
    long nb = 0;
    int neg = 1;
    char const *s = str;
    int count = 0;

    if (str[i] == '+' || str[i] == '-')
        neg = is_neg(str);
    while (s[i] != '\0' && ((s[i] == '+' || s[i] == '-') || is_num(s[i]))) {
        if (digit_operation(str, i, &nb, &count) == 0)
            return 0;
        i++;
    }
    return nb * neg;
}
