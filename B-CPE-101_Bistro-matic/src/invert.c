/*
** EPITECH PROJECT, 2021
** infin_add
** File description:
** Convert negative number into positive
*/

#include "../include/my.h"
#include <stdlib.h>

char *invert(char *str)
{
    int length = my_strlen(str);
    char *new;
    int j = 0;

    if (str[0] != '-')
        return str;
    new = malloc(sizeof(char) * length);
    for (int i = 1; str[i]; i++) {
        new[j] = str[i];
        j++;
    }
    new[j] = '\0';
    return new;
}
