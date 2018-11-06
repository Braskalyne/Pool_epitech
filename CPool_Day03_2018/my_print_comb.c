/*
** EPITECH PROJECT, 2018
** my_print_comb
** File description:
** 012-789
*/

void my_putchar(char c);

int my_print_numb(int number1, int number2)
{
    int number3;

    number3 = number2 + 1;
    while (number3 <= '9')
    {
        my_putchar(number1);
        my_putchar(number2);
        my_putchar(number3);
        if ((number1 == '7') && (number2 == '8') && (number3 == '9'))
        {
            my_putchar('\n');
            return (0);
        }
        my_putchar(',');
        my_putchar(' ');
        number3++;
    }
    return (0);
}

int my_print_comb(void)
{
    int number1;
    int number2;

    number1 = '0';
    while (number1 <= '7')
    {
        number2 = number1 + 1;
        while (number2 <= '8')
        {
            my_print_numb(number1, number2);	
            number2++;
        }
        number1++;
    }
    return (0);
}
