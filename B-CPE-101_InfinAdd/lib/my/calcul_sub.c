/*
** EPITECH PROJECT, 2021
** calcul_sub.c
** File description:
** substraction
*/

#include "my.h"

void reset_carry(int *sub, int *c, values_t values, int i)
{
    char *v_1 = values.value_1;
    char *v_2 = values.value_2;
    int l_max = len_max(v_1, v_2);
    int l_min = len_min(v_1, v_2);

    if ((v_1[l_max - 1 - i] <= v_2[l_min - 1 - i]) || (i >= l_min && *c == 1))
        *c = 1;
    else
        *c = 0;
    if (*sub >= 10) {
        *sub -= 10;
        *c = 0;
    }
}

int end_carry(char *value_1, int len_max, int carry, int i)
{
    if (carry == 1 && i < len_max - 1)
        return (10 + value_1[len_max - 1 - i] - 48 - carry);
    else
        return (value_1[len_max - 1 - i] - 48 - carry);
}

void calcul_sub(char *value_1, char *value_2, char neg_1, char neg_2)
{
    char *result = malloc(sizeof(char) * (len_max(value_1, value_2) + 3));
    int carry = 0;
    int sub = 0;
    int l_max = len_max(value_1, value_2);
    int l_min = len_min(value_1, value_2);
    my_strswap(&value_1, &value_2);

    for (int i = 0; i < l_max; i++) {
        if (i >= l_min)
            sub = end_carry(value_1, l_max, carry, i);
        else if (value_1[l_max - 1 - i] <= value_2[l_min - 1 - i])
            sub = ((10 + value_1[l_max-1-i]) - value_2[l_min - 1 - i]) - carry;
        else
            sub = (value_1[l_max - 1 - i] - value_2[l_min - 1 - i]) - carry;
        reset_carry(&sub, &carry, (values_t) {value_1, value_2}, i);
        result[i] = sub + 48;
    }
    display(my_revstr(result), neg_1);
    free(result);
}
