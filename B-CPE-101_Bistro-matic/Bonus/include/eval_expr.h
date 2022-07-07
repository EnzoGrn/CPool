/*
** EPITECH PROJECT, 2021
** Eval Expr
** File description:
** Eval Expr header file
*/

#include "stack.h"

#ifndef EVAL_EXPR_H
    #define EVAL_EXPR_H

typedef struct output {
    char *content;
    int pos;
} output_t;

int get_array_length(char **str);
int get_sign_amount(char *str);
char *eval_expr(char const *expr, char *base);
int is_num(char c, char *base);
int priority(char c);
int is_ope(char c);
int is_sign(char c);
int is_sign_with_par(char c);
int is_current_neg(char c);
void replace(char ***str, int open, int result);
char **rev_polish_not(char *str, char *base);
char **expr_to_array(char const *str);
void number(output_t *output, char *str, int i, char *base);
void push_end_operators(output_t *output, stack_t *stack);
void parenthesis_or_other(output_t *output, stack_t *stack, char *str, int i);
int is_rpn_valid(char ***str);

#endif
