/*
** EPITECH PROJECT, 2021
** calcul_add.c
** File description:
** the calcul of addition
*/

#include "my.h"

void calcul_add(char *v_1, char *v_2, char minus)
{
    char *result = malloc(sizeof(char) * (len_max(v_1, v_2) + 3));
    int c = 0;
    int add = 0;
    int i = 0;

    for (; i < len_max(v_1, v_2); i++) {
        if (i >= len_min(v_1, v_2))
            add = _MAX_(v_1, v_2)[my_strlen(_MAX_(v_1, v_2)) - 1 - i] - 48 + c;
        else
            add = v_1[my_strlen(v_1)-1-i]+v_2[my_strlen(v_2) - 1 - i] - 96 + c;
        if (add > 9) {
            add = add % 10;
            c = 1;
        } else
            c = 0;
        result[i] = add + 48;
    }
    if (c == 1)
        result[i] = '1';
    display(my_revstr(result), minus);
}
