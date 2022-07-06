/*
** EPITECH PROJECT, 2021
** my_strcapitalize.c
** File description:
** Capitalizes the first letter of each word
*/

char *my_strcapitalize(char *str)
{
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            upper(str, i);
        if (str[i] >= 'A' && str[i] <= 'Z') {
            lower(str, i);
        }
    }
    return str;
}

int upper(char *str, int i)
{
    if (str[i - 1] == ' ' || str[i - 1] == '-' || str[i - 1] == '+')
        return str[i] -= 32;
    return 0;
}

int lower(char *str, int i)
{
    if (str[i - 1] != ' ' || str[i - 1] != '-' || str[i - 1] != '+')
        return str[i] += 32;
    return 0;
}
