/*
** EPITECH PROJECT, 2021
** my_apply_on_matching_nodes.c
** File description:
** same task4 but whith a condition
*/

#include <stddef.h>
#include "include/mylist.h"

int my_apply_on_matching_nodes(linked_list_t *begin, int (*f)(),
void const *data_ref, int (*cmp)())
{
    linked_list_t *temp;

    temp = begin;
    while (temp != NULL) {
        if (*(cmp)(temp->data, data_ref) == 0)
            (*f)(temp->data);
        temp = temp->next;
    }
    return 0;
}
