/*
** EPITECH PROJECT, 2021
** bistromatic.h
** File description:
** header of bistro
*/

#pragma once

char *clear(char *str1);
char *convert_to_str(unsigned int res);
char *infin_mod(char *v_1, char *v_2, char *base);
char *infin_mul(char *v_1, char *v_2, char *base);
char *infin_div(char *fact1, char *fact2, char *base);
void replace_operators(char *str, char *operators, unsigned int size);
char *takeoff_zero(char *value);
int swap_mul(char **v1, char **v2);
int strcomp(char const *s1, char const *s2);
int is_negative(char const *nbr, char const *div);
int is_negative_mod(char const *nbr, char const *mod);
void fill_str(char *str, int size, char c);
void div_mod_calculation(char **nb_base, char **str, char *quotient, int *j);
char *my_calloc(int len, char c);
