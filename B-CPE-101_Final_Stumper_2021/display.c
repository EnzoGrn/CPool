/*
** EPITECH PROJECT, 2021
** display.c
** File description:
** display result
*/

#include "include/rush3.h"

void display_r1(int x, int y)
{
    my_putstr("[rush-1-1] ");
    my_put_nbr(x);
    my_putchar(' ');
    my_put_nbr(y);
    my_putchar('\n');
}

void display_r2(int x, int y)
{
    my_putstr("[rush-1-2] ");
    my_put_nbr(x);
    my_putchar(' ');
    my_put_nbr(y);
    my_putchar('\n');
}

void display_other(int x, int y)
{
    my_putstr("[rush-1-3] ");
    my_put_nbr(x);
    my_putchar(' ');
    my_put_nbr(y);
    my_putstr(" || [rush-1-4] ");
    my_put_nbr(x);
    my_putchar(' ');
    my_put_nbr(y);
    my_putstr(" || [rush-1-5] ");
    my_put_nbr(x);
    my_putchar(' ');
    my_put_nbr(y);
    my_putchar('\n');
}
