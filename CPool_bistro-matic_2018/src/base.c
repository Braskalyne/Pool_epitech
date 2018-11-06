/*
** EPITECH PROJECT, 2018
** Bass utilities
** File description:
** Functions to manipulate bases
*/

#include "my.h"

char base_to_number(char digit, char *base)
{
    int base_length = my_strlen(base);

    for (int i = 0; i < base_length; i++)
        if (base[i] == digit)
            return i;
    return (-1);
}

char number_to_base(char nbr, char *base)
{
    int base_length = my_strlen(base);

    if (nbr >= 0 && nbr < base_length)
        return base[(int)(nbr)];
    return ('x');
}
