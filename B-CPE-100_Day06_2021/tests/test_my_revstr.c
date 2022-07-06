/*
** EPITECH PROJECT, 2021
** test_my_revstr.c
** File description:
** test function revstr
*/

#include <criterion/criterion.h>

Test(my_revstr, reverse_a_string)
{
    char src[5] = "Hello";

    my_revstr(src);
    cr_assert_str_eq(dest, "olleH");
}
