/*
** EPITECH PROJECT, 2021
** my_show_word_array.c
** File description:
** display the content of an array
*/

int my_show_word_array(char * const *tab)
{
    for (int i = 0; tab[i]; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
}
