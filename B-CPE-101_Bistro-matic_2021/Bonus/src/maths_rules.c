/*
** EPITECH PROJECT, 2021
** maths_rules.c
** File description:
** rules
*/

int priority(char x)
{
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/' || x == '%')
        return 2;
    return 0;
}

int is_num(char c, char const *base)
{
    for (int i = 0; base[i] != 0; i++) {
        if (c == base[i])
            return 1;
    }
    return 0;
}

int is_sign(char c)
{
    char signs[6] = {'+', '-', '*', '/', '%', 0};

    for (int i = 0; signs[i] != 0; i++) {
        if (c == signs[i])
            return 1;
    }
    return 0;
}

int is_sign_with_par(char c)
{
    char signs[8] = {'+', '-', '*', '/', '%', '(', ')', 0};

    for (int i = 0; signs[i] != 0; i++) {
        if (c == signs[i])
            return 1;
    }
    return 0;
}

int is_current_neg(char c)
{
    char signs[7] = {'+', '-', '*', '/', '%', '(', 0};

    for (int i = 0; signs[i] != 0; i++) {
        if (c == signs[i])
            return 1;
    }
    return 0;
}
