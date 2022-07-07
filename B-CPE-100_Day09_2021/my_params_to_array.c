/*
** EPITECH PROJECT, 2021
** my_params_to_array.c
** File description:
** stores params into an array
*/

#include <my.h>

struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param *dest = malloc(sizeof(struct info_param) * (aac + 1));

    for (int i = 0; i < ac; i++) {
        dest[i].len = my_strlen(av[i]);
        dest[i].str = av[i];
        dest[i].copy = my_strdup(av[i]);
        dest[i].word_array = my_str_to_word_array(av[i]);
    }
    return dest;
}
