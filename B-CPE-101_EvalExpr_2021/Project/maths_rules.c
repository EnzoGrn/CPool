/*
** EPITECH PROJECT, 2021
** maths_rules.c
** File description:
** rules
*/

int is_ope(char c)
{
    if (c == '-' || c == '+')
        return 1;
    return 0;
}

int priority(char c)
{
    if (c == '*' || c == '/' || c == '%')
        return 1;
    return 0;
}

int is_num(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

int is_sign(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%');
}
