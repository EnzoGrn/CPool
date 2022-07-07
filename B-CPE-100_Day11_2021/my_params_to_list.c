/*
** EPITECH PROJECT, 2021
** my_params_to_list.c
** File description:
** creates a list with params
*/

#include <stddef.h>
#include "include/mylist.h"

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *list;
    linked_list_t *element;

    list = NULL;
    for (int i = 0; i < ac; i++) {
        element = malloc(sizeof(linked_list_t));
        element->data = av[i];
        list = element;
        element->next = list;
    }
    return (list);
}
