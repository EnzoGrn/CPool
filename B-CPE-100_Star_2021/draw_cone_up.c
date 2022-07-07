/*
** EPITECH PROJECT, 2021
** draw_cone_up.c
** File description:
** function who write the top cone
*/

void my_putchar(char c);
static void draw(unsigned int size, int width);

void draw_cone_up(unsigned int size)
{
    for (int width = 0; width < size; width++) {
        draw(size, width);
        my_putchar('\n');
    }
}

static void draw(unsigned int size, int width)
{
    for (int len = 0; len < 6 * size - 1; len++) {
        if (len == 2*size-width+size-1 || len == 2*size+width+size-1) {
            usleep(100000);
            my_putchar('*');
            continue;
        } if (len < 2*size-width+size-1) {
            my_putchar(' ');
            continue;
        } if (len > 2*size-width+size-1 && len < 2*size+width+size-1) {
            my_putchar(' ');
            continue;
        }
    }
}
