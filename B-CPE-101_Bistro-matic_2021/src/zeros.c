/*
** EPITECH PROJECT, 2021
** infin_add
** File description:
** Return 1 if string contains only 0
*/

#include <stdlib.h>
#include "../include/my.h"

int zero(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] != '0')
            return 0;
    }
    return 1;
}

char *remove_zero(char *str)
{
    int zero_amount = 0;
    int length = my_strlen(str);
    int j = 0;
    char *new;

    for (int i = 0; str[i] && length != 1; i++) {
        if (str[i] == '0' && length - i != 1)
            zero_amount++;
        else
            break;
    }
    new = malloc(sizeof(char) * (length - zero_amount + 1));
    for (int i = zero_amount; i <= length; i++) {
        new[j] = str[i];
        j++;
    }
    new[j] = '\0';
    return new;
}
