/*
** EPITECH PROJECT, 2021
** my_strncpy.c
** File description:
** copies n character from a string into another
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int len = 0;

    for (int i = 0; src[i] != '\0'; i++)
        len++;
    for (; i <= n; i++)
        dest[i] = src[i];
    if (n > len)
        dest[i] = '\0';
    return dest;
}
