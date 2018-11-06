/*
** EPITECH PROJECT, 2018
** tests infin_sub
** File description:
** Unit tests for infin_sub
*/

#include <criterion/criterion.h>
#include "prototypes.h"

Test(infin_sub, add)
{
    char nb1[7] = {0, 0, 1, 0, 1, 1, -128};
    char nb2[6] = {-1, -0, -0, -0, -1, -128};
    char theory[8] = {1, 0, 1, 0, 0, 0, 1, -128};
    char *result = infin_sub(nb1, nb2, "01");

    for (int i = 0; result[i] != -128; i++)
        cr_assert_eq(result[i], theory[i]);
}
