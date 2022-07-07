/*
** EPITECH PROJECT, 2021
** draw_middle_line.c
** File description:
** function who draws the top and bottom middle line
*/

void my_putchar(char c);

void draw_middle_line(unsigned int size)
{
    for (int asterisk = 0; asterisk != 2 * size + 1; asterisk++) {
        usleep(100000);
        my_putchar('*');
    }
    for (int asterisk = 0; asterisk != 2 * size - 3; asterisk++)
        my_putchar(' ');
    for (int asterisk = 0; asterisk != 2 * size + 1; asterisk++) {
        usleep(100000);
        my_putchar('*');
    }
    my_putchar('\n');
}
