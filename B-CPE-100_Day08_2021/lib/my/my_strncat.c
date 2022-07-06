/*
** EPITECH PROJECT, 2021
** my_strncat.c
** File description:
** concatenates n characters of a string in another
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int len_dest = 0;

    for (int i = 0; dest[i] != '\0'; i++)
        len_dest++;
    for (int i = 0; i < nb && src[i] != '\0'; i++) {
        dest[len_dest] = src[i];
        len_dest++;
    }
    dest[len_dest + i] = '\0';
    return dest;
}
