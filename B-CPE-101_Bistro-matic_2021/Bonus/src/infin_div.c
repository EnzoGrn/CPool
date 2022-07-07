/*
** EPITECH PROJECT, 2021
** InfinDiv
** File description:
** main file of infindiv
*/

#include <stdlib.h>
#include <unistd.h>
#include "../include/my.h"
#include "../include/infin_add.h"
#include "../include/bistromatic.h"
#include "../include/error.h"

static void set_neg(char **quotient, int neg)
{
    if (neg == 1) {
        *quotient = my_revstr(*quotient);
        (*quotient)[my_strlen(*quotient)] = '-';
        *quotient = my_revstr(*quotient);
    }
}

static char *calcul_div(char *nb1, char *nb2, int neg, char *base)
{
    char *str = malloc(sizeof(char) * (my_strlen(nb1) * my_strlen(nb2) + 1));
    char *quotient = malloc(sizeof(char) * (my_strlen(nb1) + 1));
    char *strs[3] = {NULL, NULL, 0};
    int j = 1;

    fill_str(str, (my_strlen(nb1) * my_strlen(nb2) + 1), '\0');
    fill_str(quotient, (my_strlen(nb1) + 1), '\0');
    for (int i = 0; nb1[i] != '\0'; i++) {
        if (i == 0)
            str[0] = nb1[0];
        if (strcomp(str, nb2) == -1 && i != 0) {
            str[j] = nb1[i];
            j++;
        }
        strs[0] = nb2;
        strs[1] = base;
        div_mod_calculation(strs, &str, quotient, &j);
    }
    set_neg(&quotient, neg);
    return quotient;
}

char *infin_div(char *nbr, char *div, char *base)
{
    int neg = is_negative(nbr, div);

    clear_values(&nbr, &div);
    if (div[0] == '0') {
        write(2, "syntax error", 12);
        exit(EXIT_DIV);
    }
    if (my_strlen(nbr) > 50 || my_strlen(div) > 50)
        return "0";
    if (strcomp(nbr, div) < 0)
        return ("0");
    if (strcomp(nbr, div) == 0)
        return ("1");
    else
        return calcul_div(nbr, div, neg, base);
}
