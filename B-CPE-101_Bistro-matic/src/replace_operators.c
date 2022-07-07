/*
** EPITECH PROJECT, 2021
** replace_operators
** File description:
** Replace operators with list
*/

static char get_matching_operator(int index)
{
    char *operators = "()+-*/%";

    return operators[index];
}

static void replace(char *str, char const *operators, int i, int j)
{
    if (str[i] == operators[j])
        str[i] = get_matching_operator(j);
}

void replace_operators(char *str, char *operators, unsigned int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 7; j++) {
            replace(str, operators, i, j);
        }
    }
}
