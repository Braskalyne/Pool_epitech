/*
** EPITECH PROJECT, 2018
** Infin_compare
** File description:
** Compares two integers of arbitrary size in number arrays
*/

#include "prototypes.h"

static int verify_sign(char *nb)
{
    int neg = 1;

    for (unsigned long j = 0; nb[j] != -128; j++)
        neg = (nb[j] < 0) ? -1 : 1;
    return neg;
}

int infin_compare(char *nb1, char *nb2)
{
    unsigned long size1 = na_size(nb1);
    unsigned long size2 = na_size(nb2);
    int neg1 = verify_sign(nb1);
    int neg2 = verify_sign(nb2);

    if (neg1 != neg2)
        return (neg1);
    if (size1 > size2)
        return (neg1);
    else if (size1 < size2)
        return (neg1 * -1);
    for (unsigned long i = size1; i > 0; i--) {
        if (nb1[i - 1] > nb2[i - 1])
            return (1);
        else if (nb1[i - 1] < nb2[i - 1])
            return (-1);
    }
    return (0);
}
