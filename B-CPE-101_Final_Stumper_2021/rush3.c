/*
** EPITECH PROJECT, 2021
** rush3.C
** File description:
** to string
*/

#include "include/rush3.h"

static int count_x(char *str)
{
    int x = 0;

    for (int i = 0; str[i] != '\n'; i++)
        x++;
    return x;
}

static int count_y(char *str)
{
    int y = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            y++;
    }
    return y;
}

void rush3(char *str)
{
    int x = count_x(str);
    int y = count_y(str);

    if (str[0] == 'o') {
        display_r1(x, y);
    } else if (str[0] == '/' || str[0] == '*') {
        display_r2(x, y);
    } else {
        display_other(x, y);
    }
}
