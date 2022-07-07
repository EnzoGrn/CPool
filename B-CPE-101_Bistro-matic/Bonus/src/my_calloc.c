/*
** EPITECH PROJECT, 2021
** my_calloc.c
** File description:
** Custom malloc filled by char
*/

#include <stdlib.h>
#include "../include/bistromatic.h"

char *my_calloc(int len, char c)
{
    char *str = malloc(sizeof(char) * len);

    fill_str(str, len, c);
    return str;
}
