/*
** EPITECH PROJECT, 2018
** Tests for base.c
** File description:
** Tests for the functions manipulating bases
*/

#include <criterion/criterion.h>
#include "prototypes.h"

Test(base_to_number, valid)
{
    cr_assert_eq(base_to_number('E', "0123456789ABCDEF"), 14);
    cr_assert_eq(base_to_number('L', "LURK"), 0);
    cr_assert_eq(base_to_number('3', "9876543210"), 6);
    cr_assert_eq(base_to_number('c', "acb"), 1);
    cr_assert_eq(base_to_number('x', "x"), 0);
    cr_assert_eq(base_to_number('[', "#{[|"), 2);
}

Test(base_to_number, invalid)
{
    cr_assert_eq(base_to_number('G', "0123456789ABCDEF"), -1);
    cr_assert_eq(base_to_number('.', "LURK"), -1);
}

Test(number_to_base, valid)
{
    cr_assert_eq(number_to_base(14, "0123456789ABCDEF"), 'E');
    cr_assert_eq(number_to_base(0, "LURK"), 'L');
    cr_assert_eq(number_to_base(6, "9876543210"), '3');
    cr_assert_eq(number_to_base(1, "acb"), 'c');
    cr_assert_eq(number_to_base(0, "x"), 'x');
    cr_assert_eq(number_to_base(2, "#{[|"), '[');
}

Test(number_to_base, invalid)
{
    cr_assert_eq(number_to_base(-1, "0123456789ABCDEF"), 'x');
    cr_assert_eq(number_to_base(4, "LURK"), 'x');
}
