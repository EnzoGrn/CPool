/*
** EPITECH PROJECT, 2021
** my_rev_list.c
** File description:
** reverse the list
*/

#include <stddef.h>
#include "include/mylist.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *list;
    linked_list_t *element;
    linked_list_t *temp;

    list = *begin;
    temp = NULL;
    while (list->next != NULL) {
        element = list->next;
        list->next = temp;
        temp = list;
        list = element;
    }
    list->next = temp;
    *begin = list;
}
