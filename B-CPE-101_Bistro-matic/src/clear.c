/*
** EPITECH PROJECT, 2021
** clear.c
** File description:
** clear zeros and minus
*/

#include "../include/my.h"
#include <stdlib.h>

char *takeoff_minus(char *value)
{
    int len = my_strlen(value);
    char *clean_minus;
    int j = 0;

    if (value[0] != '-')
        return value;
    clean_minus = malloc(sizeof(char) * len);
    for (int i = 1; i < len; i++) {
        clean_minus[j] = value[i];
        j++;
    }
    clean_minus[j] = '\0';
    return (clean_minus);
}

char *count_zero(int (*i), char **value, int (*nbr_zero))
{
    int len = my_strlen(*value);

    for (; (*i) < len && len != 1; (*i)++) {
        if ((*value)[(*i)] == '0' && len - (*i) != 1)
            (*nbr_zero)++;
        else
            break;
    }
}

char *takeoff_zero(char *value)
{
    int nbr_zero = 0;
    int len = my_strlen(value);
    int j = 0;
    int i = 0;
    int min = 0;
    char *clean_value;

    if (value[0] == '-')
        min = 1;
    i = min;
    count_zero(&i, &value, &nbr_zero);
    clean_value = malloc(sizeof(char) * (len - nbr_zero));
    if (min == 1) {
        clean_value[0] = '-';
        j++;
    }
    i = nbr_zero + min;
    for (; i < len; i++, j++)
        clean_value[j] = value[i];
    return (clean_value);
}

char *clear(char *str)
{
    str = takeoff_minus(str);
    str = takeoff_zero(str);
    return str;
}
