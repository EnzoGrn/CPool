/*
** EPITECH PROJECT, 2021
** clear.c
** File description:
** clear zeros and minus
*/

#include "my.h"

char *takeoff_minus(char *value)
{
    int len = my_strlen(value);
    char *clean_minus;
    int j = 0;

    if (value[0] != '-')
        return value;
    clean_minus = malloc(sizeof(char) * len- 1);
    for (int i = 1; i < len; i++) {
        clean_minus[j] = value[i];
        j++;
    }
    return (clean_minus);
}

char *takeoff_zero(char *value)
{
    int nbr_zero = 0;
    int len = my_strlen(value);
    int j = 0;
    char *clean_value;

    for (int i = 0; i < len && len != 1; i++) {
        if (value[i] == '0' && len - i != 1)
            nbr_zero++;
        else
            break;
    }
    clean_value = malloc(sizeof(char) * (len - nbr_zero));
    for (int i = nbr_zero; i < len; i++) {
        clean_value[j] = value[i];
        j++;
    }
    return (clean_value);
}

void clear(char **str1, char **str2)
{
    *str1 = takeoff_minus(*str1);
    *str2 = takeoff_minus(*str2);
    *str1 = takeoff_zero(*str1);
    *str2 = takeoff_zero(*str2);
}
