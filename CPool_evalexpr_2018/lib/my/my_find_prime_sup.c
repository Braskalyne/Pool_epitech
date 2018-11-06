/*
** EPITECH PROJECT, 2018
** my_find_prime_sup
** File description:
** Find smallest prime superior to nb
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    for (nb = nb; !my_is_prime(nb); nb++);
    return nb;
}
