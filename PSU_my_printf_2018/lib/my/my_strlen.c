/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** my_strlen
*/

#include "../../include/my.h"

int my_strlen(char *str)
{
    int i = 0;

    while (str[i])
	i++;
    return (i);
}
