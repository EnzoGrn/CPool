/*
** EPITECH PROJECT, 2021
** infin_add
** File description:
** Get sign of the result
*/

#include "../include/infin_add.h"
#include "../include/my.h"

int is_neg(char *str1, char *str2)
{
    char *neg_value = (str1[0] == '-' ? str1 : str2);
    char *other_value = (str1[0] == '-' ? str2 : str1);

    clear_values(&neg_value, &other_value);
    clear_values(&str1, &str2);
    if (my_strcmp(str1, str2) == 0)
        return 0;
    else if (str_max_value(neg_value, other_value) == neg_value)
        return 1;
    return 0;
}
