/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** idk
*/

int num_verify(char const str)
{
    if (str >= '0' && str <= '9')
        return 1;
    return 0;
}

int dash_verify(int result, int dash_counter)
{
    if (dash_counter % 2 != 0)
        result = result * (-1);
    return result;
}

int dash_count(char const c, int dash_counter)
{
    if (c == '-')
        dash_counter++;
    return dash_counter;
}

int my_getnbr(char const *str)
{
    int dash_counter = 0;
    long long int result = 0;
    char c = str[0];

    for (int i = 0; c != '\0'; i++) {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
            return 0;
        while (num_verify(c) == 0) {
            dash_count(c, dash_counter);
            i++;
        }
        while (num_verify(c) == 1) {
            result = c - 48 + result * 10;
            i++;
        }
        dash_verify(result, dash_counter);
        if (result != 0 && (result >= -2147483648 && result <= 2147483647))
            return result;
        return 0;
    }
}
