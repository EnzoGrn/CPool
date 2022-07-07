/*
** EPITECH PROJECT, 2021
** bistro
** File description:
** convert int to str
*/

#include <stdlib.h>
#include <unistd.h>

#include "../include/my.h"

//Doesn't handle negatives
char *convert_to_str(unsigned int res)
{
    char *result;
    int temp;
    int origin = res;
    int count = 1;

    while (origin > 9) {
        count++;
        origin /= 10;
    }
    result = malloc(sizeof(int) * count);
    for (int i = 0; i != count; i++) {
        temp = res % 10;
        res /= 10;
        result[i] = temp + 48;
    }
    return my_revstr(result);
}
