/*
** EPITECH PROJECT, 2018
** step2.c
** File description:
** step2
*/

#include <unistd.h>

void my_putchar(char c)
{
    write (1, &c, 1);
}

char get_upper_case(char d)
{
    if ((d > 64) && (d < 91))
        d = (d + 32);
    return (d);
}

void my_put_nbr(int nb)
{
    if (nb > 9)
        my_put_nbr(nb / 10);
    else if (nb < 0) {
        nb = nb * -1;
        write(1, "-", 1);
        my_put_nbr(nb / 10);
        }
    my_putchar(nb % 10 + '0');
}

void my_frequencies(int count, char **argv)
{
    int i = 0;
    int j = 0;

    while (argv[1][i] != '\0') {
        if ((argv[1][i] >= 65 && argv[1][i] <= 90)
        || (argv[1][i] >= 97 && argv[1][i] <= 122))
            j = j + 1;
        i = i + 1;
    }
    count = (count * 10000);
    count = (count / j);
    my_putchar(' ');
    my_putchar('(');
    my_put_nbr(count / 100);
    my_putchar('.');
    if ((count % 100) < 10)
        my_putchar('0');
    my_put_nbr(count % 100);
    my_putchar('%');
    my_putchar(')');
    my_putchar('\n');
}

int main(int argc, char **argv)
{
    int i = 0;
    int count = 0;
    int j = 2;

    my_error(argc);
    while (j < argc) {
        my_putchar(argv[j][0]);
        my_putchar(':');
        while (argv[1][i] != '\0') {
            if (get_upper_case(argv[1][i]) == get_upper_case(argv[j][0]))
                count = count + 1;
            i = i + 1;
            }
        my_put_nbr(count);
        my_frequencies(count, argv);
        count = 0;
        j = j + 1;
        i = 0;
        }
    return (0);
}
