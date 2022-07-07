/*
** EPITECH PROJECT, 2021
** len_max_min.c
** File description:
** function len_max and len_min
*/

int my_strlen(char const *str);

int len_max(char *value_1, char *value_2)
{
    int len_1 = my_strlen(value_1);
    int len_2 = my_strlen(value_2);

    if (len_1 < len_2)
        return len_2;
    else
        return len_1;
}

int len_min(char *value_1, char *value_2)
{
    int len_1 = my_strlen(value_1);
    int len_2 = my_strlen(value_2);

    if (len_1 < len_2)
        return len_1;
    else
        return len_2;
}
