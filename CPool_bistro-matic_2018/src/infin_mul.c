/*
** EPITECH PROJECT, 2018
** InfinMul
** File description:
** Working parts of infin mul project
*/

#include <stdlib.h>
#include <unistd.h>
#include "prototypes.h"
#include "my.h"
#include "mul.h"

static char rec_mul(char *result, op_m_t *op)
{
    char sum;

    if (op->nb[0] == -128 && op->carry == 0)
        return (0);
    else if (op->nb[0] == -128)
        sum = (*result + op->carry);
    else
        sum = (*result + op->nb[0] * op->mul + op->carry);
    *result = sum % op->base;
    op->carry = sum / op->base;
    op->nb++;
    return rec_mul(result + 1, op);
}

char *infin_mul(char *nb1, char *nb2, char *base)
{
    op_m_t op = {0, nb2, 0, my_strlen(base)};
    unsigned long size = na_size(nb1) + na_size(nb2);
    char *result;

    result = malloc(sizeof(char) * (size + 4));
    for (unsigned long i = 0; i < size + 4; i++)
        result[i] = 0;
    for (unsigned long j = 0; nb1[j] != -128; j++) {
        op.mul = nb1[j];
        op.nb = nb2;
        rec_mul(result + j, &op);
    }
    result[size + 3] = -128;
    remove_trailing_zeros(result);
    return (result);
}
