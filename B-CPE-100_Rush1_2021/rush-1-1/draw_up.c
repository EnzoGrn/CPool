/*
** EPITECH PROJECT, 2021
** draw_up.c
** File description:
** function who draw the line
*/

void my_putchar(char c);

void draw_up(int x)
{
    for (int i = 0; i < x -2; i++)
        my_putchar('-');
}
