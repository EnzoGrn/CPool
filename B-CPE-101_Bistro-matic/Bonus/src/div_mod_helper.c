/*
** EPITECH PROJECT, 2021
** InfinDiv & InfinMod
** File description:
** Helper functions for infin_div and infin_mod
*/

#include "../include/my.h"
#include "../include/bistromatic.h"
#include "../include/infin_add.h"

void div_mod_calculation(char **nb_base, char **str, char *quotient, int *j)
{
    char *it = "1";
    char *fact2 = nb_base[0];
    char *base = nb_base[1];
    char *tmp1 = infin_mul(it, fact2, base);
    char *tmp2;

    if (strcomp((*str), infin_mul(it, fact2, base)) != -1) {
        while (strcomp((*str), infin_mul(it, tmp1, base)) != -1) {
            tmp2 = infin_mul(it, fact2, base);
            it = addition(it, "1", 0, base);
        }
        it = substraction(it, "1", base);
        *str = substraction((*str), tmp2, base);
        my_strcat(quotient, it);
        *j = my_strlen((*str));
    }
}

int strcomp(char const *s1, char const *s2)
{
    int i = 0;

    if (my_strlen(s1) > my_strlen(s2))
        return 1;
    else if (my_strlen(s1) < my_strlen(s2))
        return -1;
    while (s1[i] || s2[i]) {
        if (s1[i] > s2[i]) {
            return 1;
        }
        else if (s1[i] < s2[i])
            return -1;
        i++;
    }
    return 0;
}

int is_negative_mod(char const *nbr, char const *mod)
{
    if ((nbr[0] == '-' && mod[0] != '-') ||
        (nbr[0] != '-' && mod[0] == '-') ||
        (nbr[0] == '-' && mod[0] == '-'))

        return 1;
    else
        return 0;
}

int is_negative(char const *nbr, char const *div)
{
    if ((nbr[0] == '-' && div[0] != '-') || (nbr[0] != '-' && div[0] == '-'))
        return 1;
    else
        return 0;
}

void fill_str(char *str, int size, char c)
{
    for (int i = 0; i < size; i++)
        str[i] = c;
}
