/*
** EPITECH PROJECT, 2018
** my_disp_stdarg.c
** File description:
** my_disp_stdarg
*/

#include <stdarg.h>
#include "include/my.h"

void my_display(va_list ap, int j, char *s)
{
    switch(s[j]) {
        case 'c':
            my_putchar(va_arg(ap, int));
            break;
        case 's':
            my_putstr(va_arg(ap, char*));
            break;
        case 'd':
            my_putnbr(va_arg(ap, int));
            break;
        case 'l':
            if (s[j + 1] == 'd') {
                my_long_putnbr(va_arg(ap, int));
                j++;
                break;
            }
            else 
                break;
        default:
            if (s[j] == '%') {
                my_putchar('%');
                j++;
            }
            else {
                my_putchar('%');
                my_putchar(s[j]);
            }
    }
}

int disp_stdarg(char *s, ...)
{
    va_list ap;
    int i = 0;
    int j = 0;

    i = (my_strlen(s));
    va_start(ap, s);
    while (s[j]) {
        if (s[j] == '%') {
            j++;
            my_display(ap, j, s);
        }
        else 
            my_putchar(s[j]);
        j++;
    }
    va_end(ap);
    return (0);
}

#include <stdio.h>

int main()
{
    disp_stdarg("Je voudrais %s à %d heure sans %c%c%c\n", "manger", 13, 'l', 'u', 'i');
    printf("Je voudrais %s à %d heure sans %c%c%c\n", "manger", 13, 'l', 'u', 'i');
    printf("bonjour %% je");
    return(0);
}
