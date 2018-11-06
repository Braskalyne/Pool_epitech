/*
** EPITECH PROJECT, 2018
** my_compute_factorial_rec.c
** File description:
** factorial recursiv
*/

int my_compute_factorial_rec(int nb)
{
    if (nb < 0 || nb > 12) {
        return (0);
    }
    if (nb > 1) {
        return nb * (my_compute_factorial_rec(nb - 1));
    }
    if (nb == 0) {
        return (1);
    }
}
