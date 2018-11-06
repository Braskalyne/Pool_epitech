/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** Display an int
*/

void my_putchar(char c);

void disp_buggy_number(void)
{
    my_putchar('-');
    my_putchar('2');
    my_putchar('1');
    my_putchar('4');
    my_putchar('7');
    my_putchar('4');
    my_putchar('8');
    my_putchar('3');
    my_putchar('6');
    my_putchar('4');
    my_putchar('8');
}

void int_print(int nb)
{
    char leading_zeros = 1;
    int digit;
    int power = 1000000000;

    for (char digit_pos = 9; digit_pos >= 0; digit_pos--) {
        digit = nb / power;
        nb = nb % power;
        power = power / 10;
        if (leading_zeros == 1 && digit != 0) {
            leading_zeros = 0;
        }
        if (leading_zeros == 0) {
            my_putchar(digit + 48);
        }
    }
}

int my_put_nbr(int nb)
{
    if (nb == 0) {
        my_putchar('0');
    } else if (nb == -2147483648) {
        disp_buggy_number();
    } else {
        if (nb < 0) {
            my_putchar('-');
            nb = -nb;
        }
        int_print(nb);
    }
    return (0);
}
