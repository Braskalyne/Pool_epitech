/*
** EPITECH PROJECT, 2018
** my_params_to_list.c
** File description:
** my_params_to_lsit
*/

#include "include/mylist.h"
#include <stdlib.h>

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    int i = 0;
    linked_list_t *element;
    linked_list_t *first = NULL;

    while (i != ac) {
        element = malloc(sizeof(*element));
        element->data = av[i];
        element->next = first;
        first = element;
        i = i + 1;
    }
    return (first);
}
