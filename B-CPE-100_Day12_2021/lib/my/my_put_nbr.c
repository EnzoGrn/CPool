/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** displays the number in argument
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int i;
    int n;

    n = nb;
    i = 1;
    while (n > 9) {
        n = n / 10;
        i = i * 10;
    }
    while (i >= 1) {
        my_putchar(((nb / i) % 10) + '0');
        i = i / 10;
    }
    return (0);
}
