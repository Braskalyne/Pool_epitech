/*
** EPITECH PROJECT, 2018
** my_list.h
** File description:
** my_list
*/

#ifndef LIST_HH_
# define LIST_HH_

typedef struct linked_list
{
    void *data;
    struct linked_list *next;
} linked_list_t;

#endif
