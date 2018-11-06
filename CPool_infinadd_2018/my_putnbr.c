/*
** EPITECH PROJECT, 2018
** my_putnbr.c
** File description:
** my_putnbr
*/

void my_putchar(char c);

void my_putnbr(int nb)
{
    if (nb > 9)
        my_putnbr(nb / 10);
    else if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
        if (nb < -9)
            my_putnbr(nb / 10);
    }
    my_putchar(nb % 10 + '0');
}
