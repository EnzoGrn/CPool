/*
** EPITECH PROJECT, 2021
** my_compute_factorial_it.c
** File description:
** iterative function return the factorial of the number
*/

int my_compute_factorial_it(int nb)
{
    int factorial = 1;

    if (nb == 0)
        return 1;
    if (nb < 0 || nb > 12)
        return 0;
    while (nb > 0){
        factorial = factorial * nb;
        nb = nb - 1;
    }
    return factorial;
}
