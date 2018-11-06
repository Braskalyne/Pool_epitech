/*
** EPITECH PROJECT, 2018
** test_infin_mul
** File description:
** Unit tests for infin_mul.c
*/

#include <criterion/criterion.h>
#include "prototypes.h"

Test(infin_mul, positive)
{
    char *nb1 = number_str_to_array("23", "0123456789", "()+-*/%");
    char *nb2 = number_str_to_array("56", "0123456789", "()+-*/%");
    char *theory = number_str_to_array("1288", "0123456789", "()+-*/%");
    char *result = infin_mul(nb1, nb2, "0123456789");

    for (int i = 0; result[i] != -128; i++)
        cr_assert_eq(result[i], theory[i]);
}
