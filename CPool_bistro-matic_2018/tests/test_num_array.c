/*
** EPITECH PROJECT, 2018
** Tests num_array
** File description:
** Tests for the functions manipulating number arrays
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdio.h>
#include "prototypes.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(number_str_to_array, normal)
{
    char theory[8] = {10, 0, 7, 15, 14, 1, 11, -128};
    char *r = number_str_to_array("--+B1EF70A", "0123456789ABCDEF", "()+-*/%");
    char theory2[2] = {0, -128};
    char *result2 = number_str_to_array("", "0123456789ABCDEF", "()+-*/%");

    for (int i = 0; i < 8; i++)
        cr_assert_eq(theory[i], r[i]);
    for (int j = 0; j < 2; j++)
        cr_assert_eq(theory2[j], result2[j]);
}

Test(print_number_array, negative, .init = redirect_all_std)
{
    char array[9] = {0, -10, 0, -7, -15, -14, -1, -11, -128};

    print_number_array(array, "0123456789ABCDEF", "()+-*/%");
    fflush(stdout);
    cr_assert_stdout_eq_str("-B1EF70A0\n");
}

Test(print_number_array, positive, .init = redirect_all_std)
{
    char array[9] = {0, 10, 0, 7, 15, 14, 1, 11, -128};

    print_number_array(array, "0123456789ABCDEF", "()+-*/%");
    fflush(stdout);
    cr_assert_stdout_eq_str("B1EF70A0\n");
}

Test(na_size, normal)
{
    char array1[8] = {10, 0, 7, 15, 14, 1, 11, -128};
    char array2[1] = {-128};

    cr_assert_eq(na_size(array1), 7);
    cr_assert_eq(na_size(array2), 0);
}
