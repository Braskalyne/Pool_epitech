/*
** EPITECH PROJECT, 2018
** my_compute_power_rec.c
** File description:
** power recursiv
*/

int my_compute_power_rec(int nb, int p)
{
    if (p > 0) {
        return nb * (my_compute_power_rec(nb, p - 1));
    }
    if (p == 0) {
        return (1);
    }
    if (p < 0) {
        return (0);
    }
}
