/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** nothing
*/

int counting_letter(char *str, char letter);
int error(int argc, char **argv);

int main(int argc, char **argv)
{
    if (error(argc, argv) == 1)
        return 84;
    else {
        for (int i = 2; i < argc; i++)
            counting_letter(argv[1], argv[i][0]);
    }
    return 0;
}

int error(int argc, char **argv)
{
    char c;

    if (argc < 3)
        return 1;
    for (int i = 2; i < argc; i++) {
        c = argv[i][0];
        if ((c < 'a' && c > 'z') || (c < 'A' && c > 'Z'))
            return 1;
    }
    return 0;
}
