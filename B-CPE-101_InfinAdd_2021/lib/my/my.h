/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** prototyped functions
*/

#pragma once
#include <stdlib.h>
#include <unistd.h>
#define _MAX_(v_1, v_2) ((my_strlen(v_1) >= my_strlen(v_2)) ? v_1 : v_2)

typedef struct values {
    char *value_1;
    char *value_2;
} values_t;

int my_strlen(char const *str);
int my_putstr(char const *str);
void my_putchar(char c);
char *my_revstr(char *str);
char negative_verify(char *value);
void display(char *result, char minus);
int len_max(char *value_1, char *value_2);
int len_min(char *value_1, char *value_2);
void calcul_add(char *value_1, char *value_2, char minus);
void calcul_sub(char *value_1, char *value_2, char neg_1, char neg_2);
int my_strcmp(char const *s1, char const *s2);
void my_strswap(char **value_1, char **value_2);
char *min_value(char *value_1, char *value_2);
char *max_value(char *value_1, char *value_2);
int my_str_isnum(char const *str);
void clear(char **str1, char **str2);
