/*
** EPITECH PROJECT, 2021
** star.c
** File description:
** draw a star
*/

void star_size_one(unsigned int size);
void my_putchar(char c);
void draw_cone_up(unsigned int size);
void draw_cone_down(unsigned int size);
void draw_middle_line(unsigned int size);
void draw_intern_cone(unsigned int size);

void star(unsigned int size)
{
    if (size == 0) {
        return;
    } else if (size == 1) {
        star_size_one(1);
    } else {
        draw_cone_up(size);
        draw_middle_line(size);
        draw_intern_cone(size);
        draw_middle_line(size);
        draw_cone_down(size);
    }
}
