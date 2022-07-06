/*
** EPITECH PROJECT, 2021
** my_strcmp.c
** File description:
** compare two strings
*/

int my_strcmp(char const *s1, char const *s2)
{
    int len_s1 = 0;
    int len_s2 = 0;
    int ascii_s1 = 0;
    int ascii_s2 = 0;

    for (int i = 0; s1[i] != '\0'; i++) {
        len_s1++;
    }
    for (int i = 0; s2[i] != '\0'; i++) {
        len_s2++;
    }
    if (len_s1 > len_s2 || len_s2 == 0)
        return 1;
    else if (len_s1 < len_s2 || len_s1 == 0)
        return -1;
    else {
        my_strcomp(s1, s2, ascii_s1, ascii_s2);
        return 0;
    }
}

int my_strcomp(char const *s1, char const *s2, int ascii_s1, int ascii_s2)
{
    int i = 0;

    while (s1[i] != '\0') {
        ascii_s1 = s1[i];
        ascii_s2 = s2[i];
        if (ascii_s1 > ascii_s2)
            return 1;
        else if (ascii_s1 < ascii_s2)
            return -1;
    }
}
