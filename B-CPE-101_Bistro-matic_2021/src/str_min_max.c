/*
** EPITECH PROJECT, 2021
** math
** File description:
** Min and Max functions
*/

#include "../include/my.h"

char *str_min(char *v1, char *v2)
{
    return (my_strlen(v1) < my_strlen(v2) ? v1 : v2);
}

char *str_max(char *v1, char *v2)
{
    return (my_strlen(v1) >= my_strlen(v2) ? v1 : v2);
}

char *str_min_value(char *v1, char *v2)
{
    if (my_strlen(v1) < my_strlen(v2))
        return v1;
    else if (my_strlen(v1) > my_strlen(v2))
        return v2;
    for (int i = 0; v1[i] != '\0'; i++) {
        if (v1[i] < v2[i])
            return v1;
        else if (v1[i] > v2[i])
            return v2;
    }
    return v2;
}

char *str_max_value(char *v1, char *v2)
{
    if (my_strlen(v1) > my_strlen(v2))
        return v1;
    else if (my_strlen(v1) < my_strlen(v2))
        return v2;
    for (int i = 0; v1[i] != '\0'; i++) {
        if (v1[i] < v2[i])
            return v2;
        else if (v1[i] > v2[i])
            return v1;
    }
    return v1;
}
