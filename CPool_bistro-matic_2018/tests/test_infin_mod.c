/*
** EPITECH PROJECT, 2018
** tests infin_mod
** File description:
** Unit tests for infin_mod
*/

#include <criterion/criterion.h>
#include "prototypes.h"

Test(infin_mod, add)
{
    char nb1[2] = {5, -128};
    char nb2[2] = {2, -128};
    char theory[2] = {1, -128};
    char *result = infin_mod(nb1, nb2, "0123456789");

    for (int i = 0; result[i] != -128; i++)
        cr_assert_eq(result[i], theory[i]);
}
