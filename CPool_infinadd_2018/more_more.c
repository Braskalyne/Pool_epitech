/*
** EPITECH PROJECT, 2018
** infinadd.c
** File description:
** infinadd
*/

#include <stdlib.h>
#include "my.h"

void my_print(int *tab, int i, int j)
{
    if (j == 1)
        my_putchar('1');
    while (i >= 0) {
        my_putnbr(tab[i]);
        i = i - 1;
    }
}

int my_addition (int i, int j, int k, int l, int number, char **argv, int *tab)
{
    if ((i < k) && (i < l))
        number = (my_getnbr(argv[1][i]) + my_getnbr(argv[2][i]) + j);
    else if (i >= k)
        number = (my_getnbr(argv[2][i]) + j);
    else if (i >= l)
        number = (my_getnbr(argv[1][i]) + j);
    j = 0;
    if (number > 9) {
        number = number - 10;
        j = 1;
    }
    if (number < 10) 
        tab[i] = number;
    return (j);
}

int *my_malloc(int k, int l, int *tab)
{
    if (k >= l)
        tab = malloc((sizeof(int) * k + 1));
    if (k < l)
        tab = malloc((sizeof(int) * l + 1));
    return (tab);
}
void my_setup(char **argv, int i, int j)
{
    int number = 0;
    int *tab;
    int k = 0;
    int l = 0;

    while (argv[1][k])
        k = k + 1;
    while (argv[2][l])
        l = l + 1;
    my_revstr(argv[1]);
    my_revstr(argv[2]);
    tab = my_malloc(k, l, tab);
    while ((k > i) || (l > i)) {
        j = my_addition(i, j, k, l, number, argv, tab);
        i = i + 1;
    }
    i = i - 1;
    my_print(tab, i, j);
    my_putchar('\n');
}

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    my_setup(argv, i, j);
    return (0);
}
