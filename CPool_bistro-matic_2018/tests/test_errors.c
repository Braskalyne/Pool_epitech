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

void redirect_all_std_error(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(check_ops, invalid, .exit_code = 84, .init = redirect_all_std_error)
{
    char incorrect[9] = "()+-*/%+";

    check_ops(incorrect);
    fflush(stderr);
    cr_assert_stderr_eq_str(SYNTAX_ERROR_MSG);
}

Test(check_parenthesis, bad, .exit_code = 84, .init = redirect_all_std_error)
{
    char incorrect[15] = "3+(3*(5-4)*6))";
    char op[8] = "()+-*/%";

    check_parenthesis(incorrect, op);
    cr_assert_stderr_eq_str(SYNTAX_ERROR_MSG);
}

Test(check_base, too_short, .exit_code = 84, .init = redirect_all_std_error)
{
    char incorrect[2] = "a";
    char op[8] = "()+-*/%";

    check_base(incorrect, op);
    fflush(stderr);
    cr_assert_stderr_eq_str(SYNTAX_ERROR_MSG);
}

Test(check_base, duplicate_op, .exit_code = 84, .init = redirect_all_std_error)
{
    char incorrect[6] = "abc+d";
    char op[8] = "()+-*/%";

    check_base(incorrect, op);
    fflush(stderr);
    cr_assert_stderr_eq_str(SYNTAX_ERROR_MSG);
}
