/*
** EPITECH PROJECT, 2021
** do-op.c
** File description:
** executes operations
*/

int do_op(int value1, char operator, int value2)
{
    for (int i = 0; str[i] != '\0'; i++) {
        switch (operator) {
        case '+':
            return (value1 + value2);
        case '-':
            return (value1 - value2);
        case '/':
            return (value1 / value2);
        case '*':
            return (value1 * value2);
        case '%':
            return (value1 % value2);
        }
    }
}

int main(int argc, char **argv)
{
    if (argc < 4)
        return 84;
    printf("%d\n",do_op(my_getnbr(argv[1]), argv[2][0], my_getnbr(argv[3])));
}
