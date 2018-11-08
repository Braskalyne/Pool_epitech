/*
** EPITECH PROJECT, 2018
** my_long_putnbr
** File description:
** display a long int
*/

#include <unistd.h>
#include "../../include/my.h"

void my_long_putnbr(long int nb)
{
    if (nb > 9)
        my_putnbr(nb / 10);
    else if (nb < 0) {
        nb = nb * -1;
        write(1, "-", 1);
        if (nb > 10)
            my_putnbr(nb / 10);
    }
    my_putchar(nb % 10 + '0');
}
