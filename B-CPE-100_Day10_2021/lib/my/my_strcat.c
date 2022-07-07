/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** concatenates two stings
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int len_dest = 0;

    for (int i = 0; dest[i] != '\0'; i++)
        len_dest++;
    for (int i = 0; src[i] != '\0'; i++) {
        dest[len_dest] = src[i];
        len_dest++;
    }
    dest[len_dest + i] = '\0';
    return dest;
}
