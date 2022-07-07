/*
** EPITECH PROJECT, 2021
** my_str_to_word_array.c
** File description:
** puts strings in array
*/

int words_nbr(char const *str)
{
    int i = 0;
    char c = str[i];

    while (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
        i++;
    return i;
}

int alphanum_verify(char const str)
{
    if ((str >= 'a' && str <= 'z') ||
        (str >= '0' && str <= '9') ||
        (str >= 'A' && str <= 'Z'))
        return 1;
    return 0;
}

char **my_str_to_word_array(char const *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **dest = malloc(sizeof(char *) * (words_nbr(str) + 2));

    for (; str[i] != '\0'; i++) {
        dest[j] = malloc(sizeof(char) * (my_strlen(str) + 1));
        while (alphanum_verify(str[i]) == 0)
            i++;
        while (alphanum_verify(str[i]) == 1) {
            dest[j][k] = str[i];
            i++;
            k++;
        }
        dest[j][k] = '\0';
        k = 0;
        j++;
    }
    return dest;
}
