/*
** EPITECH PROJECT, 2021
** summands.c
** File description:
** summands
*/

int len(char *str_ptr)
{
    int i = 0;

    for (; str_ptr[i] != '\0'; i++);
    return i;
}

void what_operator(char *nb1, char *nb2, char op)
{
    int n = 0;

    for (int i = 0; i < len(nb1); i++) {
        if (op == '+')
            n = nb1[i] + nb2[i] - 96;
        else if (op == '-')
            n = nb1[i] - nb2[i];
    }
    printf("%d\n", n);
}

int is_num(char c)
{
    if (c >= '0' && c <= '9') {
        return 1;
    }
    return 0;
}

int summands(char *str_ptr)
{
    char nb1[10];
    char nb2[10];
    int i = 0;
    int j = 0;
    char op;

    for (; is_num(str_ptr[i]) == 1; i++)
        nb1[i] = str_ptr[i];
    op = str_ptr[i];
    i++;
    for (; i < len(str_ptr); i++) {
        nb2[j] = str_ptr[i];
        j++;
    }
    what_operator(nb1, nb2, op);
}

int main(int argc, char **argv)
{
    summands(argv[1]);
}
