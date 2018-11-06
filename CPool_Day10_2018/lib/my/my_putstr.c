/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** putstr
*/


void my_putchar(char c);

int my_putstr(char const *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        my_putchar(str[i]);
        i = i + 1;
    }
    return (0);
}
