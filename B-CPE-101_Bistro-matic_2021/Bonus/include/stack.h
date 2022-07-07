/*
** EPITECH PROJECT, 2021
** Stack
** File description:
** Stack header file
*/

#ifndef STACK_H
    #define STACK_H

typedef struct stack {
    char *content;
    int top;
} stack_t;

stack_t init_stack(int size);
void push(stack_t *stack, char x);
char pop(stack_t *stack);

#endif
