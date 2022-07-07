/*
** EPITECH PROJECT, 2021
** count_island
** File description:
** main file of project
*/

#include "include/my.h"

int nbr_line(char **world);

static int create_island(char **world, int y, int x, int island_number)
{
    char *is_x = &world[y][x];

    if (*is_x != 'X')
        return 0;
    *is_x = island_number + 48;
    if (y != 0)
        create_island(world, y - 1, x, island_number);
    if (x != 0)
        create_island(world, y, x - 1, island_number);
    if (x != my_strlen(world[y]))
        create_island(world, y, x + 1, island_number);
    if (y != nbr_line(world) - 1)
        create_island(world, y + 1, x, island_number);
    return 0;
}

static void verify(char **world, int y, int x, int *island_number)
{
    if (world[y][x] == 'X') {
        create_island(world, y, x, *island_number);
        (*island_number)++;
    }
}

int nbr_line(char **world)
{
    int nbr = 0;
    for (int i = 0; world[i] != 0; i++)
        nbr++;
    return nbr;
}

int count_island(char **world)
{
    int island_number = 0;
    for (int y = 0; world[y] != 0; y++) {
        for (int x = 0; world[y][x] != '\0'; x++) {
            verify(world, y, x, &island_number);
        }
    }
    return island_number;
}
