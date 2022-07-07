/*
** EPITECH PROJECT, 2021
** my_cat.c
** File description:
** concatenate files and print on output
*/

#include <unistd.h>
#include "../include/my.h"
#include <errno.h>
#include <fcntl.h>

ssize_t read(int fd, void *buf, size_t count);

int cat_only(void)
{
    char buffer[30000];
    int size;

    while (1) {
        size = read(1, buffer, 30000 - 1);
        buffer[size] = '\0';
        my_putstr(buffer);
    }
    return 0;
}

int error(char **argv, int i)
{
    switch (errno) {
        case 13:
            write(2, "cat: ", 6);
            write(2, argv[i], my_strlen(argv[i]));
            write(2, ": Permission denied\n", 21);
            return 84;
        case 2:
            write(2, "cat: ", 6);
            write(2, argv[i], my_strlen(argv[i]));
            write(2, ": No such file or directory\n", 29);
            return 84;
        case 21:
            write(2, "cat: ", 6);
            write(2, argv[i], my_strlen(argv[i]));
            write(2, ": Is a directory\n", 18);
            return 84;
    }
    return 0;
}

void my_putstr_bin(char *str, int size)
{
    for (int i = 0; i < size; i++)
        my_putchar(str[i]);
}

int cat(int argc, char **argv)
{
    int file = 0;
    int size = 0;
    char buffer[30000] = {0};
    int i = 1;

    if (argc == 1)
        cat_only();
    for (; i < argc; i++) {
        file = open(argv[i], O_RDONLY);
        if (file == -1)
            error(argv, i);
        size = read(file, buffer, sizeof(buffer) - 1);
        buffer[size] = '\0';
        if (error(argv, i))
            return 84;
        else
            my_putstr_bin(buffer, size);
        close(file);
    }
}
