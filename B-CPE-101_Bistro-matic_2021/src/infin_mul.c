/*
** EPITECH PROJECT, 2021
** infin_mul.c
** File description:
** does the infin multiplication
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/bistromatic.h"
#include "../include/infin_add.h"

static void add_carry(int *carry, char const *base, char *tmp, int i)
{
    if (*carry != 0) {
        tmp[i] = base[*carry];
        *carry = 0;
    }
}

static void add_minus(int minus, char *tmp, int i)
{
    if (minus)
        tmp[i] = '-';
}

static void new_loop(int *shift, int *t)
{
    (*shift)++;
    *t = 0;
}

char *calcul_mul(char *v_1, char *v_2, char minus, char *b)
{
    int carry = swap_mul(&v_2, &v_1);
    int shift = 0;
    int t = 0;
    char *result = my_calloc((my_strlen(v_1) + my_strlen(v_2) + 2), '\0');
    char *tmp = my_calloc((my_strlen(v_1) + my_strlen(v_2) + 2), '\0');

    for (int pos_1 = my_strlen(v_1) - 1; pos_1 >= 0; pos_1--) {
        fill_str(tmp, shift, '0');
        for (int pos_2 = my_strlen(v_2) - 1; pos_2 >= 0; pos_2--) {
            int mul = get_idx(b, v_1[pos_1]) * get_idx(b, v_2[pos_2]) + carry;
            tmp[t++ + shift] = b[mul % my_strlen(b)];
            carry = mul / my_strlen(b);
        }
        add_carry(&carry, b, tmp, (t++ + shift));
        add_minus(minus, tmp, t + shift);
        result = addition(result, my_revstr(tmp), minus, b);
        new_loop(&shift, &t);
        fill_str(tmp, (my_strlen(v_1) + my_strlen(v_2) + 1), '\0');
    }
    return result;
}

char *infin_mul(char *v_1, char *v_2, char *base)
{
    char minus = 0;

    if ((v_1[0] == '-' && v_2[0] != '-') || (v_1[0] != '-' && v_2[0] == '-'))
        minus = '-';
    v_1 = clear(v_1);
    v_2 = clear(v_2);
    return calcul_mul(v_1, v_2, minus, base);
}
