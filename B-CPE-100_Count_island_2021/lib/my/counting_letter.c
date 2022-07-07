/*
** EPITECH PROJECT, 2021
** counting_letter.c
** File description:
** counts number of occurences of a letter
*/

int percentages(int nb);
int my_strlen(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);

static int low_verify(char letter)
{
    if ((letter >= 'a' && letter <= 'z'))
        return 1;
    return 0;
}

static long long all_letter(char *str)
{
    long long nbr_letter = my_strlen(str);
    char c;

    for (int i = 0; str[i] != '\0'; i++) {
        c = str[i];
        if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
            nbr_letter--;
    }
    return (nbr_letter);
}

static void write_output(char letter, long long occurence, char *str)
{
    my_putchar(letter);
    my_putchar(':');
    my_put_nbr(occurence);
    my_putchar(' ');
    percentages(occurence * 1000 / all_letter(str));
    my_putchar('\n');
}

int percentages(int nb)
{
    my_putchar('(');
    my_put_nbr(nb / 10);
    my_putchar('.');
    my_put_nbr((nb / 10) % 10);
    my_put_nbr(nb % 10);
    my_putchar('%');
    my_putchar(')');
    return (0);
}

int counting_letter(char *str, char letter)
{
    long long occurence = 0;
    int j = 0;
    char low = letter;

    if (low_verify(letter) == 0)
        low += 32;
    for (; str[j] != '\0'; j++) {
        if (str[j] == low)
            occurence++;
    }
    if (occurence >= -2147483648 && occurence <= 2147483647) {
        write_output(letter, occurence, str);
    }
    return 0;
}
