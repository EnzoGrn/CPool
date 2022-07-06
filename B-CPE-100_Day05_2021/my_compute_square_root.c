/*
** EPITECH PROJECT, 2021
** my_compute_square_root.c
** File description:
** return the argument square root
*/

int my_compute_square_root(int nb)
{
    int square = 1;

    if (nb < 1){
        return 0;
    }
    if (square * square != nb){
        square++;
    }
    if (square * square == nb){
        return square;
    }
}
