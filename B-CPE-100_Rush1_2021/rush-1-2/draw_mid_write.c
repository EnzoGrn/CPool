/*
** EPITECH PROJECT, 2021
** draw_mid_write.c
** File description:
** function who write the mid
*/

void my_putchar(char c);

void draw_mid_write(int x)
{
    for (int len = 1; len < x - 1; len++)
        my_putchar(' ');
}
