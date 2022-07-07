/*
** EPITECH PROJECT, 2021
** infin_add
** File description:
** Clear values, remove minus signs
*/

#include "../include/infin_add.h"

void clear_values(char **str1, char **str2)
{
    *str1 = invert(*str1);
    *str2 = invert(*str2);
    *str1 = remove_zero(*str1);
    *str2 = remove_zero(*str2);
}
