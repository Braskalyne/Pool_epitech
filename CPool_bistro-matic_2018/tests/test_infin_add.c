/*
** EPITECH PROJECT, 2018
** tests infin_add
** File description:
** Unit tests for the function of infin_add.c
*/

#include <criterion/criterion.h>
#include "prototypes.h"

Test(infin_add, add)
{
    char nb1[7] = {0, 0, 1, 0, 1, 1, -128};
    char nb2[6] = {1, 0, 0, 0, 1, -128};
    char theory[8] = {1, 0, 1, 0, 0, 0, 1, -128};
    char *result = infin_add(nb1, nb2, "01");

    for (int i = 0; result[i] != -128; i++)
        cr_assert_eq(result[i], theory[i]);
}

Test(infin_add, nb1_empty)
{
    char nb1[2] = {0, -128};
    char nb2[6] = {1, 0, 0, 0, 1, -128};
    char theory[6] = {1, 0, 0, 0, 1, -128};
    char *result = infin_add(nb1, nb2, "01");

    for (int i = 0; result[i] != -128; i++)
        cr_assert_eq(result[i], theory[i]);
}

Test(infin_add, empty)
{
    char nb1[2] = {0, -128};
    char nb2[2] = {0, -128};
    char theory[2] = {0, -128};
    char *result = infin_add(nb1, nb2, "01");

    for (int i = 0; result[i] != -128; i++)
        cr_assert_eq(result[i], theory[i]);
}

Test(infin_add, sub)
{
    char nb1[3] = {0, 1, -128};
    char nb2[2] = {-8, -128};
    char theory[2] = {2, -128};
    char *result = infin_add(nb1, nb2, "0123456789");

    for (int i = 0; result[i] != -128; i++)
        cr_assert_eq(result[i], theory[i]);
}

Test(infin_add, sub2)
{
    char nb1[4] = {-4, -7, -2, -128};
    char nb2[4] = {8, 7, 1, -128};
    char theory[3] = {-6, -9, -128};
    char *result = infin_add(nb1, nb2, "0123456789");

    for (int i = 0; result[i] != -128; i++)
        cr_assert_eq(result[i], theory[i]);
}
