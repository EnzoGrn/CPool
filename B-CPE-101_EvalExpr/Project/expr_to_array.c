/*
** EPITECH PROJECT, 2021
** my_str_to_word_array
** File description:
** Split a string into words
*/

#include <stdlib.h>
#include <stddef.h>
#include "include/my.h"

static char *create_expr(char *str, int length, int pos)
{
    char *new = malloc(sizeof(char) * length);
    int i = 0;

    for (int j = pos; j < pos + length; i++, j++)
        new[i] = str[j];
    new[i] = '\0';
    return new;
}

static int count_expr(char const *str)
{
    int count = 0;

    for (int i = 0; i < my_strlen(str); i++) {
        if (str[i] == ' ')
            count++;
    }
    return count ? count + 1 : 0;
}

char **expr_to_array(char const *str)
{
    char **array = malloc(sizeof(char *) * (count_expr(str) + 1));
    char *strcp = my_strdup(str);
    int pos = 0;
    int start = 0;
    int end = 0;

    for (int i = 0; i <= my_strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i;
            array[pos] = my_strdup(create_expr(strcp, (end - start), start));
            start = i + 1;
            pos++;
        }
    }
    array[pos] = NULL;
    return array;
}
