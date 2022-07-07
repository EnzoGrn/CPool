/*
** EPITECH PROJECT, 2021
** substraction
** File description:
** Infinite substraction helpers
*/

#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"
#include "../include/infin_add.h"

char *get_sub_result(char *result, int neg)
{
    int zero_amount = 0;
    int len = my_strlen(result);
    char *res = malloc(sizeof(char) * (len + 2));
    int pos = 0;

    if (neg)
        res[pos++] = '-';
    for (int i = 0; result[i] && len != 1; i++) {
        if (result[i] == '0' && len - i != 1)
            zero_amount++;
        else
            break;
    }
    for (int i = 0; i < len; i++)
        res[i + pos] = result[i + zero_amount];
    result[len - 1 + zero_amount + pos] = '\0';
    return res;
}

int greater_addition(int *carry, int i, char *str1, char *base)
{
    int tmp = 0;
    int base_len = my_strlen(base);
    int len1 = my_strlen(str1);

    if (*carry != 0 && i < len1 - 1) {
        tmp = (base_len + get_idx(base, str1[len1 - 1 - i]) - *carry);
        *carry = base_len / tmp;
    } else {
        tmp = (get_idx(base, str1[len1 - 1 - i]) - *carry);
        *carry = 0;
    }
    return tmp;
}

void swap_strings(char **str1, char **str2)
{
    char *str_tmp = *str1;

    *str1 = str_max_value(*str1, *str2);
    *str2 = str_min_value(str_tmp, *str2);
}

int get_sign_and_swap_and_clear(char **str1, char **str2)
{
    int neg = 0;

    if (is_neg(*str1, *str2) == 1)
        neg = 1;
    clear_values(str1, str2);
    swap_strings(str1, str2);
    return neg;
}
