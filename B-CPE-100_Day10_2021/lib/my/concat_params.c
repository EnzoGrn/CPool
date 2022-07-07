/*
** EPITECH PROJECT, 2021
** concat_params.c
** File description:
** concates arguments into a single string
*/

char *concat_params(int argc,char **argv)
{
    char *str;
    int len_max = 0;

    for (int i = 0; i < argc; i++)
        len_max += my_strlen(argv[i]);
    str = malloc(sizeof(char) * (len_max + argc));
    for (int i = 0; i < argc; i++) {
        my_strcat(str, argv[i]);
        my_strcat(str, "\n");
    }
    return str;
}
