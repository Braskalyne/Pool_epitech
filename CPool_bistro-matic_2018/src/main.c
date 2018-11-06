/*
** EPITECH PROJECT, 2018
** Main
** File description:
** Main for the bistromatic project
*/

#include "prototypes.h"
#include "my.h"
#include "bistromatic.h"
#include <stdlib.h>
#include <unistd.h>

unsigned long my_atoul(char *str)
{
    unsigned long number = 0;

    for (int i = 0; str[i] >= '0' && str[i] <= '9'; i++) {
        number *= 10;
        number += str[i] - 48;
    }
    return number;
}

char *get_expression(unsigned long size)
{
    char *expression;

    if (size <= 0) {
        write(2, SYNTAX_ERROR_MSG, my_strlen(SYNTAX_ERROR_MSG));
        exit(84);
    }
    expression = malloc(sizeof(char) * (size + 1));
    if (read(0, expression, size) != size) {
        write(2, ERROR_MSG, my_strlen(ERROR_MSG));
        exit(84);
    }
    expression[size] = '\0';
    return expression;
}

int main(int ac, char **av)
{
    unsigned long size;
    char *expression;
    char *result;

    if (ac != 4 || my_strcmp(av[1], "-h") == 0)
        disp_usage();
    size = my_atoul(av[3]);
    expression = get_expression(size);
    result = eval_expr(expression, av[1], av[2]);
    print_number_array(result, av[1], av[2]);
    free(expression);
    free(result);
    return (0);
}
