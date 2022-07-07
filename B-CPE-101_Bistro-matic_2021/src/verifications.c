/*
** EPITECH PROJECT, 2021
** infin_add
** File description:
** Make infinite calculations
*/

#include "../include/my.h"
#include "../include/infin_add.h"

static int is_str_neg_num(char *str)
{
    return (str[0] == '-');
}

int are_str_neg_num(char *str1, char *str2)
{
    return (is_str_neg_num(str1) && is_str_neg_num(str2));
}

int is_single_neg_num(char *str1, char *str2)
{
    int not_neg = !are_str_neg_num(str1, str2);

    return (not_neg && (is_str_neg_num(str1) || is_str_neg_num(str2)));
}

static int is_digit(char c)
{
    return (c >= '0' && '9' >= c);
}

int only_numbers(char *str)
{
    if (!is_digit(str[0]) && str[0] != '-')
        return 0;
    for (int i = 1; str[i] != '\0'; i++) {
        if (!(str[i] >= '0' && '9' >= str[i]))
            return 0;
    }
    return 1;
}
