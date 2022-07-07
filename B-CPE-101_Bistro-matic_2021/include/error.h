/*
** EPITECH PROJECT, 2021
** error.h
** File description:
** the header of error
*/

#pragma once
#include <stdlib.h>

/* argument */
#define BASE 1
#define OPE 2
#define LEN 3

/* output error */
#define EXIT_OPE 84
#define EXIT_PAR 84
#define EXIT_ARG 84
#define EXIT_BASE 84
#define EXIT_SIZE_NEG 84
#define EXIT_READ 84
#define EXIT_MALLOC 84
#define EXIT_EXPR_INV 84
#define EXIT_DIV 84
#define EXIT_MOD 84

/* prototyped */
int check_arg(int argc, char **argv);
int compare(char const *expr, int i, int j);
int idem(char *expr);
int unmatched_par(char *expr);
int invalid_expr(char *expr, char *base);
char *get_expr(unsigned int size);
int is_ope(char c);
int is_prio(char c);
int is_num(char c, char *base);
int is_alpha(char c);
