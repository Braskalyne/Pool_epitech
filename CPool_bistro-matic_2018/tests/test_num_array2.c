/*
** EPITECH PROJECT, 2018
** Tests num_array
** File description:
** Tests for the functions manipulating number arrays
*/

#include <criterion/criterion.h>
#include <stdio.h>
#include "prototypes.h"

Test(remove_trailing_zeros, normal)
{
    char theory[3] = {1, 1, -128};
    char long_array[6] = {1, 1, 0, 0, 0, -128};
    remove_trailing_zeros(long_array);

    for (int i = 0; i < 3; i++)
        cr_assert_eq(theory[i], long_array[i]);
}

Test(remove_trailing_zeros, no_trailing_zeros)
{
    char theory[3] = {1, 1, -128};
    char long_array[3] = {1, 1, -128};
    remove_trailing_zeros(long_array);

    for (int i = 0; i < 3; i++)
        cr_assert_eq(theory[i], long_array[i]);
}
