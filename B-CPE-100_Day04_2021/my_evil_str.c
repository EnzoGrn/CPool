/*
** EPITECH PROJECT, 2021
** my_evil_str.c
** File description:
** reverse string's caracters two by two
*/

char *my_evil_str(char *str)
{
    int len = my_strlen(str);

    for (int i = 0; i <= len  / 2 - i - 1; i++) {
        char str_swap = str[i];

        str[i] = str[len - i - 1];
        str[len - i - 1] = str_swap;
    }
    return str;
}
