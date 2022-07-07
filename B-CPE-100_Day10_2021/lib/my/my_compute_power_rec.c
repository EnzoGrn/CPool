/*
** EPITECH PROJECT, 2021
** my_compute_power_rec.c
** File description:
** recursive function return the argument raised power
*/

int my_compute_power_rec(int nb, int p)
{
    int power;

    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    if (p % 2 == 0) {
        power = my_compute_power_rec(nb, p / 2);
        return power * power;
    }
    return nb * my_compute_power_rec(nb, p - 1);
}
