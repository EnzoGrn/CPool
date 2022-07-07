/*
** EPITECH PROJECT, 2021
** my_find_prime_sup.c
** File description:
** return the smallest prime after or equal to the number given
*/

int my_find_prime_sup(int nb)
{
    while (my_is_prime(nb) == 0){
        nb++;
    }
    return nb;
}
