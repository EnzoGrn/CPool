/*
** EPITECH PROJECT, 2021
** max_min_value.c
** File description:
** compare the max and min value between two strings
*/

#include "my.h"

char *min_value(char *value_1, char *value_2)
{
    int len_1 = my_strlen(value_1);
    int len_2 = my_strlen(value_2);

    if (len_1 < len_2)
        return value_1;
    else if (len_1 > len_2)
        return value_2;
    for (int i = 0; value_1[i] != '\0'; i++) {
        if (value_1[i] < value_2[i])
            return value_1;
        else if (value_1[i] > value_2[i])
            return value_2;
    }
    return value_1;
}

char *max_value(char *value_1, char *value_2)
{
    int len_1 = my_strlen(value_1);
    int len_2 = my_strlen(value_2);

    if (len_1 > len_2)
        return value_1;
    else if (len_1 < len_2)
        return value_2;
    for (int i = 0; value_1[i] != '\0'; i++) {
        if (value_1[i] < value_2[i])
            return value_2;
        else if (value_1[i] > value_2[i])
            return value_1;
    }
    return value_1;
}
