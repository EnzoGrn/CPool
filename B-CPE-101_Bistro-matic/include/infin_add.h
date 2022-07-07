/*
** EPITECH PROJECT, 2021
** infin_add
** File description:
** Infin add header file
*/

#ifndef INFIN_ADD_H
    #define INFIN_ADD_H

typedef struct strings {
    char *s1;
    char *s2;
} strings_t;

char *addition(char *str1, char *str2, int neg, char *base);
char *substraction(char *str1, char *str2, char *base);
char *str_min(char *v1, char *v2);
char *str_max(char *v1, char *v2);
char *str_min_value(char *v1, char *v2);
char *str_max_value(char *v1, char *v2);
char *invert(char *str);
int are_str_neg_num(char *str1, char *str2);
int is_single_neg_num(char *str1, char *str2);
int zero(char *str);
char *remove_zero(char *str);
void clear_values(char **str1, char **str2);
int is_neg(char *str1, char *str2);
int only_numbers(char *str1);
int get_idx(char const *str, char c);
void swap_strings(char **str1, char **str2);
int get_sign_and_swap_and_clear(char **str1, char **str2);
int greater_addition(int *carry, int i, char *str1, char *base);
char *get_sub_result(char *result, int neg);

#endif
