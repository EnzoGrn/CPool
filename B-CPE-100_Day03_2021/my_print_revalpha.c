/*
** EPITECH PROJECT, 2021
** my_print_revalpha.c
** File description:
** like the function my_print_alpha, but beginning with z (to a)
*/

int my_print_revalpha(void)
{
    for (int i = 122 ; i > 96 ; i--) {
        my_putchar(i);
    }
    my_putchar('\n');
    return (0);
}
