/*
** EPITECH PROJECT, 2021
** my_strncmp.c
** File description:
** compare two strings on n characters
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int ascii_s1 = 0;
    int ascii_s2 = 0;
    int total_ascii_s1 = 0;
    int total_ascii_s2 = 0;

    for (int i = 0; i < n && s1[i] != s1[n] && i != n; i++) {
        ascii_s1 = s1[i];
        total_ascii_s1 += ascii_s1;
    }
    for (int i = 0; i < n && s2[i] != s2[n]; i++) {
        ascii_s2 = s2[i];
        total_ascii_s2 += ascii_s2;
    }
    if (total_ascii_s1 == total_ascii_s2)
        return 0;
    else if (total_ascii_s1 < total_ascii_s2)
        return -1;
    else
        return 1;
    return 0;
}
