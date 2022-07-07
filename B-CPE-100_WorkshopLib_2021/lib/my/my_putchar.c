/*
** EPITECH PROJECT, 2021
** my_putchar.c
** File description:
** write a char
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}
