/*
** EPITECH PROJECT, 2021
** reverse_polish_notation.c
** File description:
** return the string in the reverse polish notation
*/

#include <stdlib.h>
#include "../include/eval_expr.h"
#include "../include/stack.h"
#include "../include/my.h"

char **rev_polish_not(char *str, char *b)
{
    output_t output = {malloc(sizeof(char) * (my_strlen(str) * 2 + 1)), 0};
    for (int i = 0; i < (my_strlen(str) * 2 + 1); i++)
        output.content[i] = '\0';
    stack_t stack = init_stack(get_sign_amount(str));

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_num(str[i], b) || (str[i] == '-' && is_num(str[i + 1], b) &&
        ((is_sign(str[i - 1]) || i == 0) || (is_current_neg(str[i - 1]))))) {
            number(&output, str, i, b);
        } else if (str[i] == '(' || (str[i] == '-' && str[i + 1] == '(' &&
        is_sign(str[i - 1]))) {
            push(&stack, str[i]);
        } else {
            parenthesis_or_other(&output, &stack, str, i);
        }
    }
    push_end_operators(&output, &stack);
    output.content[my_strlen(output.content)] = '\0';
    free(stack.content);
    return expr_to_array(output.content);
}

int is_rpn_valid(char ***str)
{
    int count = 0;
    int length = get_array_length(*str);

    for (int i = 0; i < length; i++) {
        if (my_strlen((*str)[i]) == 1 && is_sign((*str)[i][0]))
            count++;
    }

    return ((count + 1) == (length - count));
}
