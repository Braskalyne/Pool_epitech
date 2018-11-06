/*
** EPITECH PROJECT, 2018
** my_strdup.c
** File description:
** my_strdup
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    int i = 0;
    char *dest;

    while (src[i]) {
        i = i + 1;
    }
    dest = malloc(sizeof(char) * (i + 1));
    i = 0;
    while (src[i]) {
        dest[i] = src[i];
        i = i + 1;
    }
    return (dest);
}
