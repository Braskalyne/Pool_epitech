/*
** EPITECH PROJECT, 2018
** my_list_size.c
** File description:
** my_list_size
*/

#include "include/mylist.h"
#include <stdlib.h>

int my_list_size(linked_list_t const *begin)
{
    int i = 0;
    const linked_list_t *element;

    element = begin;
    if (element == NULL)
        return (0);
    while (element != NULL) {
        element = element->next;
        i = i + 1;
    }
    return (i);
}
