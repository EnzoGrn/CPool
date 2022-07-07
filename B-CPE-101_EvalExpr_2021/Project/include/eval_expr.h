/*
** EPITECH PROJECT, 2021
** Eval Expr
** File description:
** Eval Expr header file
*/

#ifndef EVAL_EXPR_H
    #define EVAL_EXPR_H

typedef struct pos {
    int str;
    int out;
    int ope;
} pos_t;

typedef struct strings {
    char *out;
    char *ope;
    char *str;
} strings_t;

int get_array_length(char **str);
int get_sign_amount(char *str);
int eval_expr(char const *expr);
int is_num(char c);
int priority(char c);
int is_ope(char c);
int is_sign(char c);
void replace(char ***str, int open, int close, int result);
char **rev_polish_not(char *str);
char **expr_to_array(char const *str);
void neg_number(strings_t *strings, pos_t *pos);
void write_number(strings_t *strings, pos_t *pos);
void write_operator(strings_t *strings, pos_t *pos);
void ope_prio(strings_t *strings, pos_t *pos);
int push_ope_par(strings_t *strings, pos_t *pos);
void push_ope(strings_t *strings, pos_t *pos);

#endif
