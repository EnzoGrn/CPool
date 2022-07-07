/*
** EPITECH PROJECT, 2021
** infin_add
** File description:
** Calculation function
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/infin_add.h"

static int display_sign(int carry, char *result, int neg)
{
    if (neg && (carry == 1 && zero(result)))
        return 1;
    if (neg && (carry == 0 && !zero(result)))
        return 1;
    if (neg && !zero(result))
        return 1;
    return 0;
}

static char *get_add_result(int carry, char *result, int neg)
{
    char *res = malloc(sizeof(char) * (my_strlen(result) + 3));
    int len = my_strlen(result);
    int pos = 0;

    if (display_sign(carry, result, neg))
        res[pos++] = '-';
    if (carry != 0)
        res[pos++] = '1';
    for (int i = 0; i < len; i++)
        res[i + pos] = result[i];
    result[len - 1 + pos] = '\0';
    return res;
}

static void swap(char **str1, char **str2)
{
    char *str_tmp = *str1;

    *str1 = str_max(*str1, *str2);
    *str2 = str_min(str_tmp, *str2);
}

static int is_neg_and_clear(char **str1, char **str2)
{
    int neg = are_str_neg_num(*str1, *str2);

    clear_values(str1, str2);
    return neg;
}

char *addition(char *s1, char *s2, int neg, char *b)
{
    int is_neg = is_neg_and_clear(&s1, &s2) || neg;
    int l1 = my_strlen(str_max(s1, s2));
    int l2 = my_strlen(str_min(s1, s2));
    char *result = malloc(sizeof(char) * (l1 + l2));
    int tmp = 0;
    int c = 0;
    int base_len = my_strlen(b);

    swap(&s1, &s2);
    for (int i = 0; i < l1; i++) {
        if (i >= l2)
            tmp = get_idx(b, s1[l1 - 1 - i]) + c;
        else
            tmp = get_idx(b, s1[l1 - 1 - i]) + get_idx(b, s2[l2 - 1 - i]) + c;
        c = (tmp >= base_len) ? tmp / base_len : 0;
        if (tmp >= base_len)
            tmp -= base_len;
        result[i] = b[tmp % base_len];
    }
    return get_add_result(c, my_revstr(result), is_neg);
}
