/*
** EPITECH PROJECT, 2021
** star_size_one.c
** File description:
** draw a star of size 1
*/

void my_putchar(char c);
void draw_cone_one(unsigned int  size);
void draw_middle_one(unsigned int size);
void draw_intern_one(unsigned int size);

void star_size_one(unsigned int size)
{
    draw_cone_one(size);
    draw_middle_one(size);
    draw_intern_one(size);
    draw_middle_one(size);
    draw_cone_one(size);
}

void draw_cone_one(unsigned int size)
{
    for (int i = 0; i < 3; i++)
        my_putchar(' ');
    my_putchar('*');
    my_putchar('\n');
}

void draw_middle_one(unsigned int size)
{
    for (int i = 0; i < 3; i++)
        my_putchar('*');
    my_putchar(' ');
    for (int i = 0; i < 3; i++)
        my_putchar('*');
    my_putchar('\n');
}

void draw_intern_one(unsigned int size)
{
    my_putchar(' ');
    my_putchar('*');
    for (int i = 0; i < 3; i++)
        my_putchar(' ');
    my_putchar('*');
    my_putchar('\n');
}
