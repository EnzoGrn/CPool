/*
** EPITECH PROJECT, 2021
** reverse_polish_helpers.c
** File description:
** Helpers function for reverse polish notation function
*/

#include "../include/my.h"
#include "../include/eval_expr.h"
#include "../include/stack.h"
#include <stddef.h>

static void closing_parenthesis(output_t *output, stack_t *stack, int i)
{
    char x;

    while ((x = pop(stack)) != '(') {
        (output->content)[(output->pos)++] = x;
        (output->content)[(output->pos)++] = ' ';
    }
    if ((x == '(' && (stack->content)[(stack->top)] == '-')
    && is_sign((stack->content)[(stack->top) - 1])) {
        (output->content)[(output->pos)++] = '-';
        (output->content)[(output->pos)++] = '1';
        (output->content)[(output->pos)++] = ' ';
        (output->content)[(output->pos)++] = '*';
        (output->content)[(output->pos)++] = ' ';
        pop(stack);
    }
}

static void push_others(output_t *output, stack_t *stack, char *str, int i)
{
    if (stack->top >= 0) {
        while (priority((stack->content)[(stack->top)]) >= priority(str[i])) {
            (output->content)[(output->pos)++] = pop(stack);
            (output->content)[(output->pos)++] = ' ';
        }
    }
    push(stack, str[i]);
}

void parenthesis_or_other(output_t *output, stack_t *stack, char *str, int i)
{
    if (str[i] == ')') {
        closing_parenthesis(output, stack, i);
    } else {
        push_others(output, stack, str, i);
    }
}

void number(output_t *output, char *str, int i, char *base)
{
    (output->content)[(output->pos)++] = str[i];
    if (is_num(str[i], base) && !is_num(str[i + 1], base)) {
        (output->content)[(output->pos)++] = ' ';
    }
}

void push_end_operators(output_t *output, stack_t *stack)
{
    while ((stack->top) != -1) {
        (output->content)[(output->pos)++] = pop(stack);
        if ((stack->top) != -1)
            (output->content)[(output->pos)++] = ' ';
    }
    if ((output->content)[(output->pos) - 1] == ' ')
        (output->content)[--(output->pos)] = 0;
    (output->content)[(output->pos)] = '\0';
}
