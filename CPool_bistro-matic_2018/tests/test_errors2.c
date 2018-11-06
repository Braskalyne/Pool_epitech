/*
** EPITECH PROJECT, 2018
** test_errors.c
** File description:
** unit tests for errors.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "prototypes.h"
#include "my.h"

void redirect_all_std_error2(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(check_duplicate, invalid, .exit_code = 84, .init = redirect_all_std_error2)
{
    char incorrect[6] = "abcda";

    check_duplicate(incorrect);
    fflush(stderr);
    cr_assert_stderr_eq_str(SYNTAX_ERROR_MSG);
}

Test(correct, correct)
{
    cr_assert_eq(check_parenthesis("(a())", "()+-*/%"), 0);
    cr_assert_eq(check_base("abcd", "()+-*/%"), 0);
    cr_assert_eq(check_ops("()+-*/%"), 0);
    cr_assert_eq(check_duplicate("abcd"), 0);
}

Test(disp_usage, only_one, .exit_code = 84, .init = redirect_all_std_error2)
{
    disp_usage();
    fflush(stderr);
    cr_assert_stderr_eq_str("USAGE\n./calc base operators size_read\n"
    "\nDESCRIPTION\n- base: all the symbols of the base\n- operators: the "
    "symbols for the parentheses and the 5 operators\n- size_read: "
    "number of characters to be read\n");
}
