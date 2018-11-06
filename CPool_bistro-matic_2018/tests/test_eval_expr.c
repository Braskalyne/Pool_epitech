/*
** EPITECH PROJECT, 2018
** Test eval_expr
** File description:
** Unit tests using criterion for eval_expr.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "prototypes.h"

void redirect_ev(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(eval_expr, normal)
{
    char *theory = number_str_to_array("-744629760", "0123456789", "()+-*/%");
    char *result = eval_expr("-(12*(13+15/5*(6/(12+14%(30%5+(10*25)-46)+16)"
    "-20)/43)*20)*(-(12-98*42)*(16+63-50/3))", "0123456789", "()+-*/%");

    for (int i = 0; result[i] != -128; i++)
        cr_assert_eq(result[i], theory[i]);
}

Test(eval_expr, invalid_operator, .init = redirect_ev, .exit_code = 84)
{
    eval_expr("3v3", "0123456789", "()+-*/%");
    fflush(stderr);
    cr_assert_stderr_eq_str(SYNTAX_ERROR_MSG);
}

Test(eval_expr, invalid_digit, .init = redirect_ev, .exit_code = 84)
{
    eval_expr("3+v", "0123456789", "()+-*/%");
    fflush(stderr);
    cr_assert_stderr_eq_str(SYNTAX_ERROR_MSG);
}
