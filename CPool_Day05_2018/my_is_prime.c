/*
** EPITECH PROJECT, 2018
** my_is_prime.c
** File description:
** prime numbers
*/

int my_is_prime(int nb)
{
    int i;
    int count;

    if (nb > 2147483647) {
	    return (0);
    }
    i = 2;
    count = 1;
    while (i <= nb) {
        if (nb % i == 0) {
            count = count + 1;
        }
        i = i + 1;
    }
    if (count == 2) {
        return (1);
    }
    if (count != 2) {
        return (0);
    }
}
