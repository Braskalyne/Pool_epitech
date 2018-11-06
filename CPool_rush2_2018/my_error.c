/*
** EPITECH PROJECT, 2018
** my_error.c
** File description:
** my_error
*/

#include <unistd.h>

void my_error(int argc)
{
    if (argc < 3) {
        write(2, "84", 2);
    }
}
