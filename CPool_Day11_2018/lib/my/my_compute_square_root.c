/*
** EPITECH PROJECT, 2018
** my_compute_square_root.c
** File description:
** square root 
*/

int my_compute_square_root(int nb)
{
    int i;

    i = 1;
    while ((i * i != nb) && (i <= 46340 )) {
        i = i + 1;
    }
    if ((i * i) == nb) {
        return (i);
    }
    if (nb < 0) {
        return (0);
    }
    return (0);
}
