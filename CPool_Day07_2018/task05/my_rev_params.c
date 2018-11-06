/*
** EPITECH PROJECT, 2018
** my_rev_params.c
** File description:
** my_rev_params
*/


#include <unistd.h>

void my_putchar(char c)
{
    write (1, &c, 1);
}

void my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
}

int main(int argc, char **argv)
{
    int i = argc;
    
    while (i > 0) {
        my_putstr(argv[i - 1]);
        my_putchar('\n');
        i = i - 1;
    }
    return (0);
}
