/*
** EPITECH PROJECT, 2018
** my_compute_square_root
** File description:
** Compute whole square roots
*/

int my_compute_square_root(int nb)
{
    int root = 1;
    int const MAX_ROOT = 46341;

    if (nb <= 0) {
        return (0);
    } else if (nb == 1) {
        return (1);
    }
    while (root < MAX_ROOT && root < nb) {
        if (root * root == nb) {
            return (root);
        } else {
            root++;
        }
    }
    return (0);
}
