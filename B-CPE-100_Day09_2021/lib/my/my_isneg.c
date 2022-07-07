/*
** EPITECH PROJECT, 2021
** my_isneg.c
** File description:
** displays if negative or not
*/

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
        my_putchar('\n');
    } else if (n >= 0) {
        my_putchar('P');
        my_putchar('\n');
    }
    return (0);
}
