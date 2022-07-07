/*
** EPITECH PROJECT, 2021
** rush-1-1
** File description:
** print square
*/

int write (int fd, char *buf, int nb_octects);
void my_putchar(char c);
void draw_up(int x);
void draw_mid(int x);

void write_up(int x, int y)
{
    if (y == 1) {
        if (x == 1) {
            my_putchar('o');
        } else {
            my_putchar('o');
            draw_up(x);
            my_putchar('o');
            my_putchar('\n');
        }
    } else {
        my_putchar('o');
        for (int i = 0; i < x - 2; i++){
            my_putchar('-');
        }
        my_putchar('o');
        my_putchar('\n');
    }
}

void write_mid(int x, int y)
{
    for (int width = 1; width < y -1; width++) {
        if (x == 1) {
            my_putchar('|');
        } else {
            my_putchar('|');
            draw_mid(x);
            my_putchar('|');
        }
        my_putchar('\n');
    }
}

void write_down(int x, int y)
{
    my_putchar('o');
    for (int i = 1; i < x -1; i++) {
        my_putchar('-');
    }
    my_putchar('o');
    my_putchar('\n');
}

void rush(int x, int y)
{
    if (x < 1 || y < 1) {
        write(2, "Invalid size\n", 13);
        return;
    } else {
        if (y == 1){
            write_up(x, y);
        } else if (x == 1) {
            my_putchar('o');
            my_putchar('\n');
            write_mid(x, y);
            my_putchar('o');
        } else {
            write_up(x, y);
            write_mid(x, y);
            write_down(x, y);
        }
    }
}
