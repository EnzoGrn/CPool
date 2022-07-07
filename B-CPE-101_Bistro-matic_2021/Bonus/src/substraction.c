/*
** EPITECH PROJECT, 2021
** infin_add
** File description:
** Calculation function
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/infin_add.h"

static int inferior(char c1, char c2, char *b, int *c)
{
    int base_len = my_strlen(b);
    int tmp = base_len + get_idx(b, c1) - get_idx(b, c2) - *c;

    if (c1 == c2 && *c == 0)
        *c = 0;
    else
        *c = 1;
    return tmp;
}

static int superior(char c1, char c2, char *b, int *c)
{
    int tmp = get_idx(b, c1) - get_idx(b, c2) - *c;

    *c = 0;
    return tmp;
}

char *substraction(char *s1, char *s2, char *b)
{
    int is_neg = get_sign_and_swap_and_clear(&s1, &s2);
    int l1 = my_strlen(str_max_value(s1, s2));
    int l2 = my_strlen(str_min_value(s1, s2));
    char *result = malloc(sizeof(char) * (l1 + l2));
    int tmp = 0;
    int c = 0;
    int b_len = my_strlen(b);
    int i = 0;

    for ( ; i < l1; i++) {
        if (i >= l2)
            tmp = greater_addition(&c, i, s1, b);
        else if (get_idx(b, s1[l1 - 1 - i]) <= get_idx(b, s2[l2 - 1 - i]))
            tmp = inferior(s1[l1 - 1 - i], s2[l2 - 1 - i], b, &c);
        else
            tmp = superior(s1[l1 - 1 - i], s2[l2 - 1 - i], b, &c);
        result[i] = b[tmp % b_len];
    }
    return get_sub_result(my_revstr(result), is_neg);
}
