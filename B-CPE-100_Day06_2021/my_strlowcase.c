/*
** EPITECH PROJECT, 2021
** my_strlowcase.c
** File description:
** put every letter in lowercase
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    return str;
}
