/*
** EPITECH PROJECT, 2021
** mylist.h
** File description:
** structure
*/

#pragma once
#include <stdlib.h>
#include <unistd.h>

typedef struct linked_list
{
    void *data;
    struct linked_list *next;
} linked_list_t;

void my_putchar(char c);
char *my_strlowcase(char *str);
int my_strlen(char const *str);
int counting_letter(char const **argv, int i);
int my_put_nbr(int nb);
int my_putstr(char const *str);
