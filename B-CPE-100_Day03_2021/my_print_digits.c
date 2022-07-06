/*
** EPITECH PROJECT, 2021
** my_print_digits
** File description:
** displays all the digits, on a single line, in ascending order
*/

int my_print_digits(void)
{
    for (int i = 48 ; i < 58 ; i++) {
        my_putchar(i);
    }
    my_putchar('\n');
    return (0);
}
