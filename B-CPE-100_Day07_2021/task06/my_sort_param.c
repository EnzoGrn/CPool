/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** returns arguments in ascii order
*/

int my_putstr(char const *str);
void my_swap(int *a, int *b);
int my_strcmp(char const *s1, char const *s2);

int my_sort_params(int argc, char **argv)
{
    int result = 0;

    for (int i = 0; i < argc; i++) {
        result = my_strcmp(argv[i], argv[i + 1]);
        if (result < 0)
            my_swap(argv[i], argv[i + 1]);
    }
    for (int i = 0; i < argc; i++)
        my_putstr(argv[i]);
}
