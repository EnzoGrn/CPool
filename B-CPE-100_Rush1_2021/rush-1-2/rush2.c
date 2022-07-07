/*
** EPITECH PROJECT, 2021
** rush.c
** File description:
** square 2
*/

int write (int fd, char *buf, int nb_octets);
void my_putchar(char c);
void special_up(int x, int y);
void draw_mid_write(int x);

void draw_up(int x , int y)
{
    char backslash = 92;

    if ( y == 1 ) {
        for (int len = 0; len < x; len++) {
            my_putchar('*');
        }
    } else {
        my_putchar('/');
        for (int len = 0; len < x - 2; len++) {
            my_putchar('*');
        }
        my_putchar(backslash);
        my_putchar('\n');
    }
}

void draw_mid(int x, int y)
{
    for (int width = 0; width < y - 2; width++) {
        if (x == 1) {
            my_putchar('*');
        } else {
            my_putchar('*');
            draw_mid_write(x);
            my_putchar('*');
        }
        my_putchar('\n');
    }
}

void draw_down(int x, int y)
{
    char backslash = 92;

    my_putchar(backslash);
    for (int len = 1; len < x - 1; len++) {
        my_putchar('*');
    }
    my_putchar('/');
    my_putchar('\n');
}

void rush(int x, int y)
{
    if (x < 1 || y < 1) {
        write(2, "Invalid size\n", 13);
        return;
    } else {
        if ( y == 1) {
            draw_up(x, y);
        } else if ( x == 1) {
            my_putchar('*');
            my_putchar('\n');
            draw_mid(x, y);
            my_putchar('*');
            my_putchar('\n');
        } else {
            draw_up(x, y);
            draw_mid(x, y);
            draw_down(x, y);
        }
    }
}
