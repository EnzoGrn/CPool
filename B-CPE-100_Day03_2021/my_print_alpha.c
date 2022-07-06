/*
** EPITECH PROJECT, 2021
** my_print_alpha.c
** File description:
** display the lowercase alphabet in ascending order, on a single line
*/

int my_print_alpha(void)
{
    for (int i = 97 ; i < 123 ; i++) {
        my_putchar(i);
    }
    my_putchar('\n');
    return (0);
}
