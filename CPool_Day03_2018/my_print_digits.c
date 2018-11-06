/*
** EPITECH PROJECT, 2018
** my_print_digits
** File description:
** numbers
*/
void my_putchar(char c);

int my_print_digits(void)
{
    char number;

    number = 48;
    while (number <= 57)
    {
        my_putchar(number);
        number = number + 1;
    }
}
