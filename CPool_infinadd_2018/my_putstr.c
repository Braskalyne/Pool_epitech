/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
** my_putstr
*/

void my_putchar(char c);

void my_putstr(char *str)
{
    int i = 0;

    while (str[i]) {
        my_putchar(str[i]);
        i = i + 1;
    }
}
