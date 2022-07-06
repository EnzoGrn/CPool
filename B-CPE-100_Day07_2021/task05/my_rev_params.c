/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** rev param
*/

int my_putsr(char const *str);
int my_strlen(char const *str);

int my_rev_params(int argc, char **argv)
{
    for (int i = argc; i >= 0; i--)
        my_putstr(argv[i]);
    return 0;
}
