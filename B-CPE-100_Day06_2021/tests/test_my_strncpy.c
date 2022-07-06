/*
** EPITECH PROJECT, 2021
** test_my_strncpy.c
** File description:
** test the function
*/

#include <criterion/criterion.h>

char *my_strncpy(char *dest, char const *src, int n);

Test(my_strncpy, copy_n_character_from_a_string_into_another)
{
    char dest[] = "";

    my_strncpy(dest, "Hello", 9);
    cr_assert_str_eq(dest, "Hello");
}

Test(my_strncopy, copy_n_character)
{
    char dest[] = "";

    my_strncpy(dest, "Hello", 4);
    cr_assert_str_eq(dest, "Hell");
}
