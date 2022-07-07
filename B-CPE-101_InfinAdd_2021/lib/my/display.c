/*
** EPITECH PROJECT, 2021
** display.c
** File description:
** display the result
*/

#include "my.h"

void display(char *result, char minus)
{
    int pass = 0;
    int len = my_strlen(result);

    for (int i = 0; i < len && len > 1; i++) {
        if (result[i] == '0' && len - i != 1)
            pass++;
        else
            break;
    }
    if (minus == '-')
        my_putchar('-');
    for (int i = pass; i < len; i++)
        my_putchar(result[i]);
    my_putchar('\n');
    free(result);
}
