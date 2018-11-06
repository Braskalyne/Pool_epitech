/*
** EPITECH PROJECT, 2018
** rush1-1.c
** File description:
** rush 1 - 1
*/

#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}
void my_tp_line(int x)
{
    int i = 2;

    my_putchar('o');
    if (x > 1) {
        for (i; i < x;i = i + 1) {
            my_putchar('-');
        }
        my_putchar('o');
    }
    my_putchar('\n');
}

void my_bw_line(int x)
{
    int i = 2;

    my_putchar('|');
    if (x > 1) {
        for (i; i < x;i = i + 1) {
            my_putchar(' ');
        }
        my_putchar('|');
    }
    my_putchar('\n');
}

void rush(int x, int y)
{
    int i;

    if ((y <= 0) || (x <= 0)) {
       write(2, "Invalid size\n", 13);
    }
    if ((y > 2) && (x > 0)) {
        my_tp_line(x);
        i = 2;
        for (i; i < y;i = i + 1) {
            my_bw_line(x);	
        }
        my_tp_line(x);
    }
    if ((y == 1) && (x > 0)) {
        my_tp_line(x);
    }
    if ((y == 2) && (x > 0)) {
        my_tp_line(x);
        my_tp_line(x);
    }
}

int main()
{
	rush(22, 7);
	return (0);
}
