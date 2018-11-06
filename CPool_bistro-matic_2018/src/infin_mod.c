/*
** EPITECH PROJECT, 2018
** Infin_mod
** File description:
** Modulo of number arrays
*/

#include "prototypes.h"

char *infin_mod(char *nb1, char *nb2, char *base)
{
    char *result = infin_div(nb1, nb2, base);
    unsigned long i;

    for (i = 0; nb1[i] != -128; i++)
        result[i] = nb1[i];
    result[i] = -128;
    return (result);
}
