/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
** my_putstr
*/

#include "../../include/my.h"

void my_putstr(char *str)
{
    int i = 0;

    while(str[i]) {
	my_putchar(str[i]);
	i++;
    }
}
