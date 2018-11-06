/*
** EPITECH PROJECT, 2018
** test.c
** File description:
** test
*/

#include <stdio.h>
#include "my.h"

int main(int ac, char **av)
{
    if (ac == 2) {
        my_putnbr(eval_expr(av[1]));
        my_putchar('\n');
        return (0);
    }
    return (84);
}
