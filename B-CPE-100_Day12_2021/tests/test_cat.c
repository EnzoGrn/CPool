/*
** EPITECH PROJECT, 2021
** test_cat.c
** File description:
** test the function cat.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int cat(int argc, char **argv);

void redirect_all(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(cat, work, .init=redirect_all)
{
    int ac = 2;
    char *av[2] = {"./cat", "../tests/test.txt"};

    cat(ac, av);
    cr_assert_stdout_eq_str("Hello World, I love canare\n");
}

Test(cat, no_file, .init=redirect_all)
{
    int ac = 2;
    char *av[2] = {"./cat", "../tests/no_file.txt"};

    cat(ac, av);
    cr_assert_stderr_eq_str("cat: ../tests/no_file.txt: No such file or directory\n");
}

Test(cat, no_read, .init=redirect_all)
{
    int	ac = 2;
    char *av[2] = {"./cat", "../tests/no_read.txt"};

    cat(ac, av);
    cr_assert_stderr_eq_str("cat: ../tests/no_read.txt: Permission denied\n");
}
