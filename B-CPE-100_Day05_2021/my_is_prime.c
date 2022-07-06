/*
** EPITECH PROJECT, 2021
** my_is_prime.c
** File description:
** return if the argument is a prime or not
*/

int my_is_prime(int nb)
{
    int prime = 2;

    if (nb <= 1){
        return 0;
    }
    while (prime < nb){
        if (nb % prime == 0){
            return 0;
        }
        prime++;
    }
    return 1;
}
