/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** function who reverses a string
*/

char *my_revstr(char *str)
{
    int i = 0;
    int len = 0;
    char temp;

    while (str[len] != '\0')
        len++;
    len = len - 1;
    for (; i < len; i++) {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        len--;
    }
    return str;
}
