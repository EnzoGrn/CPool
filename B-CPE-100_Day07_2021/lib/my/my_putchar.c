/*
** EPITECH PROJECT, 2021
** my_putchar.c
** File description:
** write a char in standart output
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}
