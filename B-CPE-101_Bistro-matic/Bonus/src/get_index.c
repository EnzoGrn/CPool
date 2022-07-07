/*
** EPITECH PROJECT, 2021
** Get index
** File description:
** Get character index inside a string
*/

int get_idx(char const *str, char c)
{
    int index = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c)
            index = i;
    }
    return index;
}
