/*
** EPITECH PROJECT, 2018
** test_sum_stdarg.c
** File description:
** test_sum_stdarg
*/

#include <criterion/criterion.h>
#include "../include/my.h"

Test(sum_stdarg, return_correct_when_i_is_zero)
{
    int ret = sum_stdarg(0, 3, 21, 25, -4);

    cr_assert_eq(ret, 42);
}

Test(sum_stdarg, return_correct_when_i_is_one)
{
    int ret = sum_stdarg(1, 3, "toto", "titi", "tutu");

    cr_assert_eq(ret, 12);
}

Test(sum_stdarg, return_correct_when_i_is_zero2)
{
    int ret = sum_stdarg(0, 3, 21, 25, -4, 12, 17, 17);

    cr_assert_eq(ret, 42);
}
