/*
** EPITECH PROJECT, 2021
** my_strdup.c
** File description:
** allocates memory and copies the argument (string)
*/

char *my_strdup(char const *src)
{
    char *str;
    int i = 0;

    str = malloc(sizeof(char) * (my_strlen(src) + 1));
    for (; src[i] != '\0'; i++)
        str[i] = src[i];
    str[i] = '\0';
    return str;
}
