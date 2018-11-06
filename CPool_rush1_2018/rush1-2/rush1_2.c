/*
** EPITECH PROJECT, 2018
** rush1-2.c
** File description:
** rush 1 - 2
*/

#include <unistd.h>

void my_condition(int x, int y)
{
    int i = 0;
    
    if (x == 1 && y > 1) {
        for (i; i < y; i = i + 1){
      	    my_putchar('*');
            my_putchar('\n');
        }
    }
    if (y == 1 && x > 1) {
        for (i; i < x; i = i + 1){
            my_putchar('*');
        }
        my_putchar('\n');
    }
    if (x == 1 && y == 1) {
        my_putchar('*');
        my_putchar('\n');
    }
}

void my_tp_line(int x)
{
    int i = 2;

    my_putchar('/');
    if (x > 1) {
        for (i; i < x;i = i + 1) {
            my_putchar('*');
        }
        my_putchar('\\');
    }
    my_putchar('\n');
}

void my_bot_line(int x)
{
    int i = 2;

    my_putchar('\\');
    if (x > 1) {
        for (i; i < x;i = i + 1) {
            my_putchar('*');
        }
        my_putchar('/');
    }
    my_putchar('\n');
}

void my_bw_line(int x)
{
    int i = 2;

    my_putchar('*');
    if (x > 1) {
        for (i; i < x;i = i + 1) {
            my_putchar(' ');
        }
        my_putchar('*');
    }
    my_putchar('\n');
}

void rush(int x, int y)
{
    int i = 2;

    if ((y <= 0) || (x <= 0)) {
        write(2, "Invalid size\n", 13);
    }
    if ((y >= 2) && (x > 1)) {
    my_tp_line(x);
        for (i; i < y;i = i + 1) {
            my_bw_line(x);
        }
        my_bot_line(x);
    }
    my_condition(x, y);    
}
