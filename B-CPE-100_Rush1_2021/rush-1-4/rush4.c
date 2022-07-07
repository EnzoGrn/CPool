/*
** EPITECH PROJECT, 2021
** rush.c
** File description:
** square 4
*/

int write (int fd, char *buf, int nb_octets);
void my_putchar(char c);
void draw_mid_write(int x);

void draw_up(int x , int y)
{
    if (y == 1) {
        for (int len = 0; len < x; len++){
            my_putchar('B');
        }
        my_putchar('\n');
    } else {
        my_putchar('A');
        for (int len = 0; len < x - 2; len++) {
            my_putchar('B');
        }
        my_putchar('C');
        my_putchar('\n');
    }
}

void draw_mid(int x, int y)
{
    for (int width = 0; width < y - 2; width++){
        if (x == 1) {
            my_putchar('B');
        } else {
            my_putchar('B');
            draw_mid_write(x);
            my_putchar('B');
        }
        my_putchar('\n');
    }
}

void draw_down(int x, int y)
{
    my_putchar('A');
    for (int len = 1; len < x - 1; len++) {
        my_putchar('B');
    }
    my_putchar('C');
    my_putchar('\n');
}

void rush(int x, int y)
{
    if (x < 1 || y < 1) {
        write(2, "Invalid size\n", 13);
        return;
    }
    if ( y == 1) {
        draw_up(x, y);
    } else if ( x == 1){
        my_putchar('B');
        my_putchar('\n');
        draw_mid(x, y);
        my_putchar('B');
        my_putchar('\n');
    } else {
        draw_up(x, y);
        draw_mid(x, y);
        draw_down(x, y);
    }
}
