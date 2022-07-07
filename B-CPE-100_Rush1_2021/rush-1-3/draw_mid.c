/*
** EPITECH PROJECT, 2021
** draw_mid.c
** File description:
** function who draw the mid
*/

void my_putchar(char c);

void draw_mid(int x)
{
    for (int i = 1; i < x - 1; i++)
        my_putchar(' ');
}
