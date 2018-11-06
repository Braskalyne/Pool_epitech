/*
** EPITECH PROJECT, 2018
** my_is_prime
** File description:
** Verify if int is prime
*/

int my_is_prime(int nb)
{
    int divisor = 2;

    if (nb <= 1) {
        return (0);
    }
    while (divisor * divisor <= nb) {
        if (nb % divisor == 0) {
            return (0);
        }
        divisor++;
    }
    return (1);
}
