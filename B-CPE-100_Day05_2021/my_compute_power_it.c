/*
** EPITECH PROJECT, 2021
** my_compute_power_it.c
** File description:
** iterative function return the first argument raised to power
*/

int my_compute_power_it(int nb, int p)
{
    int power = nb;

    if (p < 0)
        return 0;
    if (p == 0)
        return 1;
    while (p > 1){
        power = power * nb;
        p = p - 1;
    }
    return power;
}
