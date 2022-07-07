/*
** EPITECH PROJECT, 2021
** my_putchar.c
** File description:
** write a char in the standart output
*/

#include <stddef.h>

size_t write(int fd, const void *buf, size_t nbytes);

void my_putchar(char c)
{
    write(1, &c, 1);
}
