/*
** EPITECH PROJECT, 2021
** rush3.h
** File description:
** prototyped functions
*/

#pragma once
#define BUFF_SIZE(len, width) (len * width)

int my_getnbr(char *str);
void my_putchar(char c);
int my_putstr(char *str);
int my_put_nbr(int nb);
void display_r1(int x, int y);
void display_r2(int x, int y);
void display_other(int x, int y);
void rush3(char *str);
