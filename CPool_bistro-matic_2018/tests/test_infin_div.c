/*
** EPITECH PROJECT, 2018
** test_infin_div
** File description:
** Unit tests for infin_div.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdio.h>
#include <stdlib.h>
#include "prototypes.h"

void redirect_all_std_div(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(infin_div, positive)
{
    char *nb1 = number_str_to_array("1300", "0123456789", "()+-*/%");
    char *nb2 = number_str_to_array("20", "0123456789", "()+-*/%");
    char *theory = number_str_to_array("65", "0123456789", "()+-*/%");
    char *result = infin_div(nb1, nb2, "0123456789");

    for (int i = 0; result[i] != -128; i++)
        cr_assert_eq(result[i], theory[i]);
}

Test(infin_div, negative)
{
    char *nb1 = number_str_to_array("-13", "0123456789", "()+-*/%");
    char *nb2 = number_str_to_array("2", "0123456789", "()+-*/%");
    char *theory = number_str_to_array("-6", "0123456789", "()+-*/%");
    char *result = infin_div(nb1, nb2, "0123456789");

    for (int i = 0; result[i] != -128; i++)
        cr_assert_eq(result[i], theory[i]);
}

Test(infin_div, divisor_bigger)
{
    char *nb1 = number_str_to_array("10", "0123456789", "()+-*/%");
    char *nb2 = number_str_to_array("20", "0123456789", "()+-*/%");
    char *theory = number_str_to_array("0", "0123456789", "()+-*/%");
    char *result = infin_div(nb1, nb2, "0123456789");

    for (int i = 0; result[i] != -128; i++)
        cr_assert_eq(result[i], theory[i]);
}

Test(infin_div, zero, .init = redirect_all_std_div, .exit_code = 84)
{
    char *nb1 = number_str_to_array("0", "0123456789", "()+-*/%");
    char *nb2 = number_str_to_array("0", "0123456789", "()+-*/%");
    infin_div(nb1, nb2, "0123456789");

    fflush(stderr);
    cr_assert_stderr_eq_str(SYNTAX_ERROR_MSG);
}
