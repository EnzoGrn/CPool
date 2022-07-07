/*
** EPITECH PROJECT, 2021
** stack.c
** File description:
** Stack file
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/stack.h"

stack_t init_stack(int size)
{
    char *content = malloc(sizeof(char) * size);
    stack_t stack = {content, -1};

    return stack;
}

void push(stack_t *stack, char x)
{
    (stack->content)[++(stack->top)] = x;
}

char pop(stack_t *stack)
{
    char last;

    if ((stack->top) == -1)
        return -1;
    last = (stack->content)[(stack->top)];

    (stack->content)[(stack->top)--] = 0;
    return last;
}
