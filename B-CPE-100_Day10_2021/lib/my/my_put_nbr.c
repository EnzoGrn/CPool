/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** displays the number in argument
*/

int my_put_nbr(int nb)
{
    if (nb >= 0 && nb <= 9)
      my_putchar(nb + 48);
}
