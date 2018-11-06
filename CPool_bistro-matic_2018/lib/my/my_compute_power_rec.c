/*
** EPITECH PROJECT, 2018
** my_compute_power_rec
** File description:
** Compute nb to p power recursively
*/

int prevent_overflow(int nb, int result)
{
    int max_power = 2147483647 / nb;
    int min_power = -2147483648 / nb;
    int comparator;

    max_power = (max_power < 0) ? - max_power : max_power;
    min_power = (min_power > 0) ? - min_power : min_power;
    comparator = (nb < 0) ? (- result) : result;
    if (comparator > max_power || comparator < min_power) {
        return (0);
    } else {
        return (result);
    }
}

int my_compute_power_rec(int nb, int p)
{
    int result;

    if (p == 0) {
        return (1);
    } else if (nb == 0 || p < 0) {
        return (0);
    }
    if (p == 1) {
        return (nb);
    } else {
        result = my_compute_power_rec(nb, p - 1);
        result = prevent_overflow(nb, result);
        return (result * nb);
    }
}
