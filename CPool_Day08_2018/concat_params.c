/*
** EPITECH PROJECT, 2018
** concat_params.c
** File description:
** concat_params
*/

#include <stdlib.h>

void my_putchar(char c);

void my_putstr(char *str)
{
    int i = 0;

    while(str[i]) {
        my_putchar(str[i]);
        i = i + 1;
    }
}

char *my_feed(int argc, char **argv, char *dest)
{
    int i = 0;
    int l = 0;
    int j = 0;
    int k = 0;

    while (i < (argc)) {
        while (argv[l][j]) {
            dest[k] = argv[l][j];
            k = k + 1;
            j = j + 1;
        }
        l = l + 1;
        dest[k] = '\n';
        k = k + 1;
        j = 0;
        i = i + 1;
    }
    k = k - 1;
    dest[k] = '\0';
    return (dest);
}

char *concat_params(int argc, char **argv)
{
    char *dest;
    int i = 0;
    int j = 0;
    int k = 0;
    int lenght = 0;
    int l = 0;
    
    while (i < (argc)) {
        while (argv[l][j]) {
            j = j + 1;
        }
        l = l + 1;
        i = i + 1;
        lenght = lenght + j;
        j = 0;
    }
    i = 0;
    l = 0;
    dest = malloc(sizeof(char) * (lenght + 1));
    my_feed(argc, argv, dest);
    return (dest);
}
