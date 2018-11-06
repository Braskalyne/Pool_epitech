/*
** EPITECH PROJECT, 2018
** operators.c
** File description:
** operators
*/

#include <stdlib.h>
#include "my.h"

char parse_operator(char str)
{
    char operators;

    operators = 0;
    if (str == '+')
        operators = str;
    if (str == '-')
        operators = str;
    if (str == '/')
        operators = str;
    if (str == '*')
        operators = str;
    if (str == '%')
        operators = str;
    return (operators);
}

char *get_operators(char *str)
{
    int i = 0;
    int j = 0;
    char *op;

    op = malloc(sizeof(char) * my_strlen(str) + 1);
    while (str[i]) {
        op[j] = parse_operator(str[i]);
        i = i + 1;
        if (op[j] == '+' || op[j] == '-' || op[j] == '/' || op[j] == '*' ||
        op[j] == '%')
            j = j + 1;
    }
    i = i - 1;
    op[i] == '\0';
    return (op);
}

char *replace_op(char *tab, int i)
{
    while (tab[i] != '\0') {
        tab[i] = tab[i + 1];
        i = i + 1;
    }
    tab[i] = '\0';
    return (tab);
}

int *replace_tab(int *tab, int i)
{
    while (tab[i] != '\0') {
        tab[i] = tab[i + 1];
        i = i + 1;
    }
    tab[i] = '\0';
    return (tab);
}
