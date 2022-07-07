/*
** EPITECH PROJECT, 2021
** draw_mid_write.c
** File description:
** function who draw the mid
*/

void my_putchar(char c);

void draw_mid_write(int x)
{
    for (int i = 1; i < x - 1; i++)
        my_putchar(' ');
}
