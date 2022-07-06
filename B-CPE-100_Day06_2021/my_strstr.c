/*
** EPITECH PROJECT, 2021
** my_strstr.c
** File description:
** search a string in a string
*/

char *my_strstr(char *str, char const *to_find)
{
    int pos_to_find = 0;
    int pos_str = 0;
    int len_to_find = 0;

    for (int i = 0; to_find[i] != '\0'; i++)
        len_to_find++;
    for (int i = 0; i < len_to_find; i++) {
        while (to_find[pos_to_find] != str[pos_str])
            pos_str++;
        if (to_find[pos_to_find] == str[pos_str])
            pos_to_find++;
    }
    if (pos_to_find == len_to_find - 1)
        return (&str[pos_str - pos_to_find]);
    return 0;
}
