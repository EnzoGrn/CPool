/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** use param
*/

int my_putstr(char const *str);

int my_print_params(int argc, char **argv)
{
    for (int i = 0; i < argc; i++)
        my_putstr(argv[i]);
    return 0;
}
