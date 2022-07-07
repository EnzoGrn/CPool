/*
** EPITECH PROJECT, 2021
** draw_cone_down.c
** File description:
** function who draws the bottom cone
*/

void my_putchar(char c);
static void draw(unsigned int size, int width);

void draw_cone_down(unsigned int size)
{
    for (int width = size; width > 0; width--) {
        draw(size, width);
        my_putchar('\n');
    }
}

static void draw(unsigned int size, int width)
{
    for (int len = 6*size-1; len > 3*size+(size-width-size); len--) {
        if (len == 2*size+width+size-1 || len == 2*size-width+size+1) {
            usleep(100000);
            my_putchar('*');
        } else
            my_putchar(' ');
    }
}
