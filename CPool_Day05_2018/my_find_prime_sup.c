/*
** EPITECH PROJECT, 2018
** my_find_prime_sup.c
** File description:
** prime number2
*/

int my_find_prime_sup(int nb)
{
    int i;
    int count;

    if (nb > 89999999)
        return (0);
    i = 2;
    count = 1;
    while (count != 2) {
        while (i <= nb) {
            if (nb % i == 0)
                count = count + 1;
        i = i + 1; 
        }
        if (count == 2)
            return (nb);
        if (count != 2) {
            count = 1;
            i = 2;
            nb = nb + 1;
        }
    }
}
