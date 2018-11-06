/*
** EPITECH PROJECT, 2018
** my_print_comb2
** File description:
** print comb harder
*/

void my_putchar(char c);

int my_function_too_long(int number1, int number2)
{
    int numb1D;
    int numb1M;
    int numb2D;
    int numb2M;

    numb1D = number1 / 10;
    numb1M = number1 % 10;
    numb2D = number2 / 10;
    numb2M = number2 % 10;
    my_putchar(numb1D + 48);
    my_putchar(numb1M + 48);
    my_putchar(' ');
    my_putchar(numb2D + 48);
    my_putchar(numb2M + 48);
    if ((numb1D == 9) && (numb1M == 8) && (numb2D == 9) && (numb2M == 9))
    {
        return (0);
    }
    my_putchar(',');
    my_putchar(' ');
    return (0);
}

int my_print_comb2(void)
{
    int number1;
    int number2;

    number1 = 0;
    number2 = 1;
    while (number1 < 99)
    {
        while (number2 < 100)
        {
            my_function_too_long(number1, number2);	
            number2++;
        }
        number1 = (number1 + 1);
        number2 = (number1 + 1);
    }
    return (0);
}
