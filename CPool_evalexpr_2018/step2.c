/*
** EPITECH PROJECT, 2018
** test.c
** File description:
** test
*/

#include <stdlib.h>
#include "my.h"

int *number(char *str)
{
    int *tab;
    int i = 0;
    int nbr = 0;
    int j = 0;

    tab = malloc(sizeof(int) * my_strlen(str)+ 1);
    while (str[i] != '\0') {
        while (str[i] >= '0' && str[i] <= '9') {
            nbr = nbr * 10 + (str[i] - '0');
            i = i + 1;
        }
        if (nbr != 0) {
            tab[j] = nbr;
            j = j + 1;
        }
        if (str[i] == '\0')
            break;
        nbr = 0;
        i = i + 1;
    }
    return (tab);
}

int *compute_factor(int i, int j, char *op, int *nb)
{
    if (op[i] == '/') {
        nb[j + 1] = nb[j] / nb[j + 1];
        op = replace_op(op, i);
        nb = replace_tab(nb, j);
        i = i - 1;
        j = j - 1;
    }
    if (op[i] == '%') {
        nb[j + 1] = nb[j] % nb[j + 1];
        op = replace_op(op, i);
        nb = replace_tab(nb, j);
        i = i - 1;
        j = j - 1;
    }
    return (nb);
}

int *compute_factors(int j, char *op, int *nb)
{
    int i = 0;

    while (op[i] != '\0') {
        if (op[i] == '*') {
            nb[j + 1] = nb[j] * nb[j + 1];
            op = replace_op(op, i);
            nb = replace_tab(nb, j);
            i = i - 1;
            j = j - 1;
        }
        if (op[i] == '/' || op[i] == '%') {
            nb = compute_factor(i, j, op, nb);
            i = i - 1;
            j = j - 1;
        }
        i = i + 1;
        j = j + 1;
    }
    return (nb);
}

int compute(int result, char op, int nb, int nb1)
{
    if (op == '+')
        result = result + nb;
    if (op == '-' && nb == 0)
        result = result - nb1;
    if (op == '-' && nb != 0)
        result = result - nb;
    return (result);
}

int eval_expr(char *str)
{
    int i = 1;
    int j = 0;
    int result = 0;
    int *nb;
    char *op;

    op = malloc(sizeof(char) * my_strlen(str) + 1);
    nb = malloc(sizeof(int) * my_strlen(str) + 1);
    nb = number(str);
    op = get_operators(str);
    nb = compute_factors(j, op, nb);
    j = 0;
    result = nb[0];
    while (op[j] != '\0') {
        result = compute(result, op[j], nb[i], nb[i + 1]);
        i = i + 1;
        j = j + 1;
    }
    result = compute(result, op[my_strlen(op) -1], nb[i], nb[i + 1]);
    return (result);
}
