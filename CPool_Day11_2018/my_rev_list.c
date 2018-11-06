/*
** EPITECH PROJECT, 2018
** my_rev_list.c
** File description:
** my_rev_list
*/

#include "include/mylist.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t **element;
    linked_list_t **last;
    
    element = begin;
    last = NULL;
    if (element == NULL)
	return (0);
    while (element != NULL) {
        element = last;
	last = element;
	element->next = element;
    }
}
