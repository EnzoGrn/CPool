/*
** EPITECH PROJECT, 2021
** is_ope.c
** File description:
** verify if the char is an operator
*/

int is_ope(char c)
{
    if (c == '+' || c == '-')
        return 1;
    return 0;
}

int is_prio(char c)
{
    if (c == '/' || c == '%' || c == '*')
        return 1;
    return 0;
}
