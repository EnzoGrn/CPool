/*
** EPITECH PROJECT, 2021
** my_list_size.c
** File description:
** returns the size of the list
*/

#include <stddef.h>
#include "include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
    int len = 0;

    for (; begin != NULL; len++)
        begin = begin->next;
    return len;
}
