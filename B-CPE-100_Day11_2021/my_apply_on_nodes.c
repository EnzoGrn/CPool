/*
** EPITECH PROJECT, 2021
** my_apply_on_nodes.c
** File description:
** apllies a function on nodes
*/

#include <stddef.h>
#include "include/mylist.h"

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
    linked_list_t *temp;

    temp = begin;
    while (temp != NULL) {
        (*f)(temp->data);
        temp = temp->next;
    }
    return 0;
}
