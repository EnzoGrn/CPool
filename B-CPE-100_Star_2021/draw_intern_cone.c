/*
** EPITECH PROJECT, 2021
** draw_intern_cone.c
** File description:
** function who draws the intern cone
*/

void my_putchar(char c);
void draw_up(unsigned int size, int width);
void draw_down(unsigned int size, int width);

void draw_intern_cone(unsigned int size)
{
    for (int width = 0; width < size - 1; width++) {
        draw_up(size, width);
        my_putchar('\n');
    }
    for (int width = size; width > 0; width--) {
        draw_down(size, width);
        my_putchar('\n');
    }
}

void draw_up(unsigned int size, int width)
{
    for (int len = 0; len < 6 * size - 2 - width; len++) {
        if (len == width+1 || len == 6*size-2-width-1) {
            usleep(100000);
            my_putchar('*');
        } else
            my_putchar(' ');
    }
}

void draw_down(unsigned int size, int width)
{
    for (int len = 6 * size - 1; len > width; len--) {
        if (len == 6*size-2-width+1 || len == width+1) {
            usleep(100000);
            my_putchar('*');
        } else
            my_putchar(' ');
    }
}
