/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** print a number
*/

void my_putchar(char c);

void my_putstre(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        my_putchar(str[i]);
        i++;
    }
}

int my_put_nbr(int nb)
{
    if ((nb < 0) && (nb > -2147483648))
    {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb == -2147483648)
    {
        my_putstre("-2147483648");
    }
    if (nb > 9)
    {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    else if ((nb >= 0) && (nb <= 9))
    {
        my_putchar(nb + 48);
    }
    return (0);
}
